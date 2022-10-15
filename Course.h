#include <iostream>
#include <io.h>
#include<sstream>
#include <fcntl.h>
#include <string>
#include<fstream>
#include<iomanip>
#include <windows.h>
#include<codecvt>
#include<locale>
#include <stdlib.h>
#include<stdio.h>

using namespace std;


struct date {
	int d, m, y;
};
enum dayofweek {
	MON = 2,
	TUE, WED, THU, FRI, SAT, SUN
};
enum  session {
	S1 = 1, S2, S3, S4
};
struct course {
	wstring IDcourse, namecourse, teacher, credit, dow1, dow2,maxperson;
	course* pNext;
};
void addnewcourse(course *& phead);
void inputlistcourse(course*& phead);
void xemlist(course* phead);
void deletecourse(course*& phead, wstring t);
void outputlistcourse(course* phead);

//====đọc dữ liệu từ file=====
void inputlistcourse(course*& phead) {
	wifstream enroll;
	enroll.open("enrollcourse.csv", ios_base::in);
	enroll.imbue(std::locale(std::locale::empty(), new std::codecvt_utf8<wchar_t>));
	if (enroll.fail() == true) {
		cout << "error";
		system("pause");
	}
	enroll.seekg(3);
	course* pcur = nullptr;
	while (!enroll.eof()) {
		if (phead == nullptr) {
			phead = new course;
			pcur = phead;
		}
		else {
			pcur->pNext = new course;
			pcur = pcur->pNext;
		}
		getline(enroll, pcur->IDcourse, L',');
		getline(enroll, pcur->namecourse, L',');
		getline(enroll, pcur->teacher, L',');
		getline(enroll, pcur->credit, L',');
		getline(enroll, pcur->maxperson, L',');
		getline(enroll, pcur->dow1, L',');
		getline(enroll, pcur->dow2);
		pcur->pNext = nullptr;
	}
	enroll.close();
}
//====in dữ liệu ra màn hình=====
void xemlist(course* phead) {
	system("cls");
	course* pcur = phead;
	wcout << endl;
	wcout << "NO" << setw(20) << "COURSENAME" << setw(20) << "TEACHERNAME" << setw(20) << "CREDIT" << setw(20) << "MAXPERSON" << setw(20) << "SESSION1" << setw(20) << "SESSION2" << endl;
	while (pcur != nullptr)
	{
		wcout << pcur->IDcourse << setw(20) << pcur->namecourse << setw(20) << pcur->teacher << setw(20) << pcur->credit << setw(20)<<pcur->maxperson<< setw(20) << pcur->dow1  << setw(20) << pcur->dow2 ;
		wcout << endl;
		pcur = pcur->pNext;
	}
	return;
}

//====xóa một môn học========
void deletecourse(course*& phead, wstring t) {
	course* pcur = phead;
	if (pcur->IDcourse == t) {
		course* tmp = phead;
		phead = phead->pNext;
		delete tmp;
	}
	while (pcur->pNext != nullptr) {
		if (pcur->pNext->IDcourse == t) {
			course* tmp = pcur->pNext;
			pcur->pNext = pcur->pNext->pNext;
			delete tmp;
		}
		if (pcur->pNext == nullptr) {
			course* tmp = pcur->pNext;
			delete tmp;
		}
		else
			pcur = pcur->pNext;
	}
}

//====ghi dữ liệu vào file====
void outputlistcourse(course* phead) {
	if (phead == nullptr) return;
	else {
		wofstream enroll;
		enroll.open("enrollcourse.csv", ios_base::out);
		enroll.imbue(std::locale(std::locale::empty(), new std::codecvt_utf8<wchar_t, 0x10ffff, std::generate_header>));
		course* pcur = phead;
		while (pcur != nullptr) {
			enroll << pcur->IDcourse << "," << pcur->namecourse << "," << pcur->teacher << "," << pcur->credit << "," << pcur->maxperson << "," << pcur->dow1 << "," << pcur->dow2 << endl;
			pcur = pcur->pNext;
		}
		enroll.close();
	}
}

void addnewcourse(course *& phead) {
	std::locale loc(std::locale(), new std::codecvt_utf8<wchar_t>);
	wfstream f;
	f.imbue(loc);

	course* a = phead;
	while (a->pNext != nullptr) a = a->pNext;
	a->pNext = new course;
	a = a->pNext;

	/*wcout << "ID course: ";
	getline(std::wcin, a->IDcourse);

	f << a->IDcourse << ",";

	wcout << "Name course: ";
	getline(std::wcin, a->namecourse);
	f << a->namecourse << ",";

	wcout << "Teach: ";
	getline(std::wcin, a->teacher);
	f << a->teacher << ",";

	wcout << "Number of credits: ";
	getline(std::wcin, a->credit);
	f << a->credit << ",";

	wcout << "Number of maxperson: ";
	getline(std::wcin, a->maxperson);
	f << a->maxperson << ",";

	wcout << "Time of session 1(MON/TUES/...): ";
	getline(std::wcin, a->dow1);
	f << a->dow1 << ",";


	wcout << "Time of session 2(MON/TUES/...): ";
	getline(std::wcin, a->dow2);
	f << a->dow2<<endl ;
	
	delete a;*/


	wcout << "ID course: ";
	getline(std::wcin, a->IDcourse);

	wcout << "Name course: ";
	getline(std::wcin, a->namecourse);

	wcout << "Teach: ";
	getline(std::wcin, a->teacher);

	wcout << "Number of credits: ";
	getline(std::wcin, a->credit);

	wcout << "Number of maxperson: ";
	getline(std::wcin, a->maxperson);

	wcout << "Time of session 1(MON/TUES/...): ";
	getline(std::wcin, a->dow1);

	wcout << "Time of session 2(MON/TUES/...): ";
	getline(std::wcin, a->dow2);

	a->pNext = nullptr;

	outputlistcourse(phead);

}
