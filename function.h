#ifndef _FUNCTION_H
#include<iostream>
#include<string>
#include <io.h>
#include <fcntl.h>
#include <string>
#include <windows.h>
#include<fstream>
#include<codecvt>
#include<locale>
#include<iomanip>
#define N 100
using namespace std;
struct STUDENT
{
	wstring userstudent;
	wstring passwordstudent;
	wstring passwordnewstudent;
	wstring no, coursename, teachername, credit, maxperson, daylt, dayth;
	wstring count;
	STUDENT* pnext;
};
struct STAFF
{
	wstring userstaff;
	wstring passwordstaff;
	wstring no, coursename, teachername, credit, maxperson, daylt, dayth;
	wstring No; wstring ID; wstring socialID;
	wstring firstname; wstring lastname; wstring gender; wstring dateofbirth;
	wstring totalmark; wstring midtermmark;
	wstring finalmark; wstring orthermark;
	wstring averagemark;
	wstring gpa;
	wstring course;
	STAFF* pnext;
};
void scorecourse(STAFF* phead1);
void read_course(wstring classx, STAFF*& phead1);
void addnewstudent(wstring classx, STAFF* phead);
void inputstudentscore(wstring classx, STAFF*& phead);
void read_student_a_course(wstring classx, STAFF*& phead);
void liststudent(STAFF* phead);
void liststudentwithscore(STAFF* phead);
void deletelist(STAFF*& phead);
void input_student(STUDENT a[N], int& n, wstring filestudent);
void login_student(STUDENT a[N], int n);
void login_staff(STAFF a);
void read_file_course_staff(STAFF*& S, wstring readfile);
void read_file_courses_student(STUDENT*& T, wstring readfile);
void output_enroll_course_staff(STAFF* S);
void delete_enroll_staff(STAFF*& S);
void delete_student_enroll_course(STUDENT*& T);
bool check_enroll_same(STUDENT* T, wstring m, wstring n);
void student_enroll_course(STUDENT*& T, STAFF* S);
void output_enroll_course_student(STUDENT* T);
void remove_course_student(STUDENT*& T, wstring x);
void write_student_enroll_course(STUDENT* T, wstring writefile);
#endif // !_FUNCTION_H


