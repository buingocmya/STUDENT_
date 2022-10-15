#include"function.h"

//đọc tài khoản cho sinh viên
void input_student(STUDENT a[N], int& n, wstring filestudent) {
	int i;
	wifstream filein;
	filein.open(filestudent, ios_base::in);
	filein.imbue(std::locale(std::locale::empty(), new std::codecvt_utf8<wchar_t>));
	if (filein.fail() == true) {
		cout << "ERROR";
		system("pause");
	}
	filein >> n;
	for (i = 0; i < n; i++) {
		getline(filein, a[i + 1].userstudent, L',');
		getline(filein, a[i + 1].passwordstudent);
	}
}

//đăng nhập của sinh viên
void login_student(STUDENT a[N], int n) {
	wstring u, p;
	wcout << "Log in " << endl;
	wcout << "Username: ";
	getline(wcin, u);
	wcout << "Password: ";
	getline(wcin, p);
	system("cls");
	for (int i = 0; i < n; i++) {
		if (a[i + 1].userstudent == u) {
			while (a[i + 1].userstudent != u || a[i + 1].passwordstudent != p) {
				wcout << "Log in " << endl;
				wcout << "Username: ";
				getline(wcin, u);
				wcout << "Password: ";
				getline(wcin, p);
				system("cls");
			}
			if (a[i + 1].userstudent == u && a[i + 1].passwordstudent == p) {
				wcout << "Change password ";
				getline(wcin, a[i + 1].passwordnewstudent);
				system("cls");
				while (a[i + 1].passwordnewstudent == p) {
					wcout << "Change password: ";
					getline(wcin, a[i + 1].passwordnewstudent);
					system("cls");
				}
				wcout << "Logged in successfully!!";
			}
		}
	}
}
//đăng nhập của staff
void login_staff(STAFF a) {
	const wstring u = L"hotuanthanh";
	const wstring p = L"123456";
	wcout << "Please log in" << endl;
	wcout << "Username: ";
	getline(wcin, a.userstaff);
	wcout << "Password: ";
	getline(wcin, a.passwordstaff);
	system("cls");
	while (a.userstaff != u || a.passwordstaff != p) {
		wcout << "Username or password is not correct!!!" << endl;
		wcout << "Username: ";
		getline(wcin, a.userstaff);
		wcout << "Password: ";
		getline(wcin, a.passwordstaff);
		system("cls");
	}
	system("cls");
	wcout << "Logged in successfully!!" << endl;
}

void read_file_course_staff(STAFF*& S, wstring readfile) {
	wifstream enroll;
	enroll.open(readfile, ios_base::in);
	enroll.imbue(std::locale(std::locale::empty(), new std::codecvt_utf8<wchar_t>));
	if (enroll.fail() == true) {
		cout << "ERROR";
		system("pause");
	}
	enroll.seekg(3);
	STAFF* pcur = nullptr;
	while (!enroll.eof()) {
		if (S == nullptr) {
			S = new STAFF;
			pcur = S;
		}
		else {
			pcur->pnext = new STAFF;
			pcur = pcur->pnext;
		}
		getline(enroll, pcur->no, L',');
		getline(enroll, pcur->coursename, L',');
		getline(enroll, pcur->teachername, L',');
		getline(enroll, pcur->credit, L',');
		getline(enroll, pcur->maxperson, L',');
		getline(enroll, pcur->daylt, L',');
		getline(enroll, pcur->dayth);
		pcur->pnext = nullptr;
	}
	enroll.close();
}

void read_file_courses_student(STUDENT*& T, wstring readfile) {
	wifstream enroll;
	enroll.open(readfile, ios_base::in);
	enroll.imbue(std::locale(std::locale::empty(), new std::codecvt_utf8<wchar_t>));
	if (enroll.fail() == true) {
		cout << "ERROR";
		system("pause");
	}
	enroll.seekg(3);
	STUDENT* pcur = nullptr;
	while (!enroll.eof()) {
		if (T == nullptr) {
			T = new STUDENT;
			pcur = T;
		}
		else {
			pcur->pnext = new STUDENT;
			pcur = pcur->pnext;
		}
		getline(enroll, pcur->no, L',');
		getline(enroll, pcur->coursename, L',');
		getline(enroll, pcur->teachername, L',');
		getline(enroll, pcur->credit, L',');
		getline(enroll, pcur->maxperson, L',');
		getline(enroll, pcur->daylt, L',');
		getline(enroll, pcur->dayth);
		pcur->pnext = nullptr;
	}
	enroll.close();
}



void output_enroll_course_staff(STAFF* S) {
	if (S == nullptr)return;
	else {
		wcout << "NO" << setw(20) << "COURSE NAME" << setw(20) << "TEACHER NAME" << setw(20) << "CREDIT" << setw(20) << "MAX PERSON" << setw(20) << "DAY OF THEORY" << setw(20) << "DAY OF PRACTICE" << endl;
		while (S != nullptr) {
			wcout << S->no << setw(20) << S->coursename << setw(20) << S->teachername << setw(20) << S->credit << setw(20) << S->maxperson << setw(20) << S->daylt << setw(20) << S->dayth;
			wcout << endl;
			S = S->pnext;
		}
	}
}


void delete_enroll_staff(STAFF*& S) {
	if (S == nullptr)return;
	else {
		STAFF* ptemp = nullptr;
		while (S != nullptr) {
			ptemp = S;
			S = S->pnext;
			delete ptemp;
			ptemp = nullptr;
		}
	}
}

void delete_student_enroll_course(STUDENT*& T) {
	if (T == nullptr)return;
	else {
		STUDENT* ptemp = nullptr;
		while (T != nullptr) {
			ptemp = T;
			T = T->pnext;
			delete ptemp;
			ptemp = nullptr;
		}
	}
}

bool check_enroll_same(STUDENT* T, wstring m, wstring n) {
	if (T == nullptr) return true;
	STUDENT* pcur = T;
	while (pcur != nullptr) {
		if (pcur->daylt == m || pcur->dayth == n) {
			return false;
		}
		else pcur = pcur->pnext;
	}
	return true;
}
void student_enroll_course(STUDENT*& T, STAFF* S) {
	if (S == nullptr)return;
	else {
		STAFF* pcur = S;
		STUDENT* pcur1 = nullptr;
		wstring t, y = L"0";
		wstring m, n;
		output_enroll_course_staff(S);
		wcout << "Choose course to enroll (exit if input 0): ";
		wcin >> t;
		int count = 0, count1 = 0, z;

		while (t != y) {

			while (pcur->no != t && pcur != nullptr)pcur = pcur->pnext;
			if (pcur->no == t && pcur != nullptr) {
				m = pcur->daylt;
				n = pcur->dayth;
				if (check_enroll_same(T, m, n) == false) {
					system("cls");
					wcout << "Similar time" << endl;
					output_enroll_course_staff(S);
					wcout << "Choose course to enroll (exit if input 0): ";
					wcin >> t;
				}
				else {
					++count;
					if (T == nullptr) {
						T = new STUDENT;
						pcur1 = T;
					}
					else {
						pcur1->pnext = new STUDENT;
						pcur1 = pcur1->pnext;
					}
					pcur1->no = pcur->no;
					pcur1->coursename = pcur->coursename;
					pcur1->teachername = pcur->teachername;
					pcur1->credit = pcur->credit;
					pcur1->maxperson = pcur->maxperson;
					pcur1->daylt = pcur->daylt;
					pcur1->dayth = pcur->dayth;
					pcur1->count = count1 + 1;
					pcur1->pnext = nullptr;
					system("cls");
					output_enroll_course_staff(S);
					wcout << "Choose course to enroll (exit if input 0): ";
					wcin >> t;

				}
				if (pcur1->count >= pcur1->maxperson) {
					cout << "maxperson is full " << endl;
					output_enroll_course_staff(S);
					wcout << "Choose course to enroll (exit if input 0): ";
					wcin >> t;
				}
				if (count == 5)break;
				pcur = S;
				count1 = 0;
			}
		}
	}
}

void output_enroll_course_student(STUDENT* T) {
	STUDENT* pcur = T;
	wcout << "NO" << setw(20) << "COURSENAME" << setw(20) << "TEACHERNAME" << setw(20) << "CREDIT" << setw(20) << "MAXPERSON" << setw(20) << "dayLT" << setw(20) << "DAYTH" << endl;
	while (pcur != nullptr) {
		wcout << pcur->no << setw(20) << pcur->coursename << setw(20) << pcur->teachername << setw(20) << pcur->credit << setw(20) << pcur->maxperson << setw(20) << pcur->daylt << setw(20) << pcur->dayth;
		wcout << endl;
		pcur = pcur->pnext;
	}
}

void remove_course_student(STUDENT*& T, wstring x) {
	if (T == nullptr)return;
	else {
		STUDENT* ptemp = nullptr;
		if (T->no == x && T != nullptr) {
			ptemp = T;
			T = T->pnext;
			delete ptemp;
			ptemp = nullptr;
			return;
		}
		STUDENT* pcur = T;
		while (pcur->pnext->no != x && pcur->pnext != nullptr)pcur = pcur->pnext;
		if (pcur->pnext->no == x && pcur->pnext != nullptr) {
			ptemp = pcur->pnext;
			pcur->pnext = pcur->pnext->pnext;
			delete ptemp;
			ptemp = nullptr;
		}
	}
}



void write_student_enroll_course(STUDENT* T, wstring writefile) {
	if (T == nullptr) return;
	else {
		wofstream enroll;
		enroll.open(writefile, ios_base::out);
		enroll.imbue(std::locale(std::locale::empty(), new std::codecvt_utf8<wchar_t, 0x10ffff, std::generate_header>));
		STUDENT* pcur = T;
		while (pcur != nullptr) {
			enroll << pcur->no << "," << pcur->coursename << "," << pcur->teachername << "," << pcur->credit << "," << pcur->maxperson << "," << pcur->daylt << "," << pcur->dayth << endl;
			pcur = pcur->pnext;
		}
		enroll.close();
	}
}

void liststudent(STAFF* phead)
{
	wcout << "NO" << setw(20) << "STUDENT ID" << setw(20) << "LAST NAME" << setw(20) << "FIRST NAME" << setw(20) << "GENDER" << setw(20) << "DATE OF BIRTH" << setw(20) << "SOCIAL ID" << endl;
	while (phead != nullptr)
	{
		wcout << phead->No << setw(20) << phead->ID << setw(20) << phead->firstname << setw(20) << phead->lastname << setw(20) << phead->gender << setw(20) << phead->dateofbirth << setw(20) << phead->socialID;
		wcout << endl;
		phead = phead->pnext;
	}
}
void addnewstudent(wstring classx, STAFF* phead)
{
	if (phead == nullptr) return;
	wstring No;
	wstring ID; wstring socialID;
	wstring firstname; wstring lastname; wstring gender; wstring dateofbirth;
	STAFF* pcur = phead;
	int t = 0;
	while (pcur->pnext != nullptr)
	{
		pcur = pcur->pnext;
		++t;
	}
	No = to_wstring(t + 1);
	pcur->pnext = new STAFF;
	pcur = pcur->pnext;
	wcin.ignore();
	wcout << "\n ID: ";
	getline(wcin, ID);
	wcout << "\n Last name: ";
	getline(wcin, firstname);
	wcout << "\n First name: ";
	getline(wcin, lastname);
	wcout << "\n Gender: ";
	getline(wcin, gender);
	wcout << "\n Date of birth: ";
	getline(wcin, dateofbirth);
	wcout << "\n Social ID:  ";
	getline(wcin, socialID);
	pcur->No = No;
	pcur->ID = ID;
	pcur->firstname = firstname;
	pcur->lastname = lastname;
	pcur->gender = gender;
	pcur->dateofbirth = dateofbirth;
	pcur->socialID = socialID;
	pcur->pnext = nullptr;
	wstring s = L",";
	wofstream student;
	student.open(classx, ios::out | ios::app);
	student.imbue(std::locale(std::locale::empty(), new std::codecvt_utf8<wchar_t>));
	student << endl << pcur->No << s << pcur->ID << s << pcur->firstname << s << pcur->lastname << s << pcur->gender << s << pcur->dateofbirth << s << pcur->socialID;
	student << endl;
	student.close();
}
void deletelist(STAFF*& phead)
{
	STAFF* ptmp = phead;
	while (phead != nullptr)
	{
		phead = phead->pnext;
		delete ptmp;
		ptmp = phead;
	}
}
void inputstudentscore(wstring classx, STAFF*& phead)
{
	wifstream student;
	student.open(classx, ios::in);
	student.imbue(std::locale(std::locale::empty(), new std::codecvt_utf8<wchar_t>));
	student.seekg(3);
	if (student.fail() == true)
	{
		wcout << "Can't open file\n";
		system("pause");
	}
	STAFF* pcur = nullptr;
	while (!student.eof())
	{
		if (phead == nullptr)
		{
			phead = new STAFF;
			pcur = phead;
		}
		else
		{
			pcur->pnext = new STAFF;
			pcur = pcur->pnext;
		}
		getline(student, pcur->No, L',');
		getline(student, pcur->ID, L',');
		getline(student, pcur->firstname, L',');
		getline(student, pcur->lastname, L',');
		getline(student, pcur->gender, L',');
		getline(student, pcur->dateofbirth, L',');
		getline(student, pcur->socialID, L',');
		getline(student, pcur->averagemark, L',');
		getline(student, pcur->gpa);
		pcur->pnext = nullptr;
	}
	student.close();
}

void read_student_a_course(wstring classx, STAFF*& phead) {
	wifstream student;
	student.open(classx, ios::in);
	student.imbue(std::locale(std::locale::empty(), new std::codecvt_utf8<wchar_t>));
	student.seekg(3);
	if (student.fail() == true)
	{
		wcout << "Can't open file\n";
		system("pause");
	}
	STAFF* pcur = nullptr;
	while (!student.eof())
	{
		if (phead == nullptr)
		{
			phead = new STAFF;
			pcur = phead;
		}
		else
		{
			pcur->pnext = new STAFF;
			pcur = pcur->pnext;
		}
		getline(student, pcur->No, L',');
		getline(student, pcur->ID, L',');
		getline(student, pcur->firstname, L',');
		getline(student, pcur->lastname, L',');
		getline(student, pcur->gender, L',');
		getline(student, pcur->dateofbirth, L',');
		getline(student, pcur->socialID);
		pcur->pnext = nullptr;
	}
	student.close();
}
void liststudentwithscore(STAFF* phead)
{
	wcout << "NO" << setw(20) << "STUDENT ID" << setw(20) << "LAST NAME" << setw(20) << "FIRST NAME" << setw(20) << "AVERAGE MARK" << setw(20) << "GPA" << endl;
	while (phead != nullptr)
	{
		wcout << phead->No << setw(20) << phead->ID << setw(20) << phead->firstname << setw(20) << phead->lastname << setw(20) << phead->averagemark << setw(20) << phead->gpa;
		wcout << endl;
		phead = phead->pnext;
	}
}
void read_course(wstring classx, STAFF*& phead1)
{
	wifstream student;
	student.open(classx, ios::in);
	student.imbue(std::locale(std::locale::empty(), new std::codecvt_utf8<wchar_t>));
	student.seekg(3);
	if (student.fail() == true)
	{
		wcout << "Can't open file\n";
		return;
	}
	else
	{
		STAFF* pcur1 = nullptr;
		while (!student.eof())
		{
			if (phead1 == nullptr)
			{
				phead1 = new STAFF;
				pcur1 = phead1;
			}
			else
			{
				pcur1->pnext = new STAFF;
				pcur1 = pcur1->pnext;
				pcur1->pnext = nullptr;
			}
			//getline(student, pcur1->course, L',');
			getline(student, pcur1->No, L',');
			getline(student, pcur1->ID, L',');
			getline(student, pcur1->firstname, L',');
			getline(student, pcur1->lastname, L',');
			getline(student, pcur1->midtermmark, L',');
			getline(student, pcur1->finalmark, L',');
			getline(student, pcur1->orthermark, L',');
			getline(student, pcur1->totalmark);
			//wcin.ignore();
			pcur1->pnext = nullptr;
		}
	}
	student.close();
	scorecourse(phead1);
}
void scorecourse(STAFF* phead1)
{
	if (phead1 == nullptr) return;
	wcout << endl << "NO" << setw(20) << "STUDENT ID" << setw(20) << "LAST NAME" << setw(20) << "FIRST NAME" << setw(20) << "MIDTERM MARK" << setw(20) << "FINAL MARK" << setw(20) << "ORTHER MARK" << setw(20) << "TOTAL MARK" << endl;
	//STAFF* pcur1 = phead1;
	while (phead1 != nullptr)
	{
		wcout << phead1->No << setw(20) << phead1->ID << setw(20) << phead1->firstname << setw(20) << phead1->lastname << setw(20) << phead1->midtermmark << setw(20) << phead1->finalmark << setw(20) << phead1->orthermark << setw(20) << phead1->totalmark;
		wcout << endl;
		phead1 = phead1->pnext;
	}
}
