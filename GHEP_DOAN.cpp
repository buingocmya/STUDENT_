#include"function.h"
#include"console.h"
#include"Menu.h"

void menu1()
{
    STAFF* phead = nullptr;
    STAFF* phead1 = nullptr;
    wstring class1 = L"20CLC01.csv";
    wstring class2 = L"20CLC02.csv";
    wstring class3 = L"20CLC03.csv";
    wstring class4 = L"20CLC04.csv";
    wstring course = L"DiemMon7.csv";
    wstring course1 = L"DiemMon1.csv";
    wstring course2 = L"DiemMon2.csv";
    wstring course3 = L"DiemMon3.csv";
    wstring course4 = L"DiemMon4.csv";
    wstring course5 = L"DiemMon5.csv";
    wstring course6 = L"DiemMon6.csv";
    int n = 1;
    wcout << "\nChoose school year: " << endl;
    wcout << "1. 2020-2021\n     1st year student \n";
    wcout << "2. 2021-2022\n     2st year student \n";
    wcout << "3. 2022-2023\n     3st year student \n";
    wcout << "4. 2023-2024\n     4st year student \n";
    wcout << "0. cancel\n";
    wcin >> n;
    system("cls");
    while (n != 0)
    {
        
        switch (n)
        {
        case 1:
        {
            wcout << "\n1. Class ";
            wcout << "\n2. Course ";
            wcout << "\n0. Cancel \n";
            int t1;
            wcin >> t1;
            system("cls");
            while (t1 != 0)
            {
                
                switch (t1)
                {
                case 1:
                {
                    wcout << "\n1. Class 20CLC1 ";
                    wcout << "\n2. Class 20CLC2 ";
                    wcout << "\n3. Class 20CLC3 ";
                    wcout << "\n4. Class 20CLC4 ";
                    wcout << "\n0. Back\n ";
                    int t2;
                    wcin >> t2;
                    system("cls");
                    while (t2 != 0)
                    {
                        phead = nullptr;
                        switch (t2)
                        {
                        case 1:
                        {
                            int t3;
                            wcout << "\n1. Class list ";
                            wcout << "\n2. Add new student(s) ";
                            wcout << "\n3. Score ";
                            wcout << "\n4. Score course ";
                            wcout << "\n0. Cancel\n ";
                            wcin >> t3;
                            inputstudentscore(class1, phead);
                            system("cls");
                            while (t3 != 0)
                            {
                                switch (t3)
                                {
                                case 1:
                                {
                                    liststudent(phead);
                                    break;
                                }
                                case 2:
                                {
                                    addnewstudent(class1, phead);
                                    system("cls");
                                    liststudent(phead);
                                    break;
                                }
                                case 3:
                                {
                                    liststudentwithscore(phead);
                                    break;
                                }
                                case 4:
                                {
                                    int t4 = 1;
                                    while (t4 != 0)
                                    {
                                        phead1 = nullptr;
                                        wcout << L"\n1. KỸ THUẬT LẬP TRÌNH  ";
                                        wcout << L"\n2. VI TÍCH PHÂN  ";
                                        wcout << L"\n3. VẬT LÝ ĐẠI CƯƠNG ";
                                        wcout << L"\n4. TRIẾT HỌC ";
                                        wcout << L"\n5. NHẬP MÔN LẬP TRÌNH ";
                                        wcout << L"\n6. KINH TẾ ĐẠI CƯƠNG ";
                                        wcout << L"\n7. TOÁN RỜI RẠC ";
                                        wcout << "\n0. Cancel\n";
                                        wcin >> t4;
                                        system("cls");
                                        switch (t4)
                                        {
                                        case 1:
                                        {
                                            read_course(course, phead1);
                                            break;
                                        }
                                        case 2:
                                        {
                                            read_course(course1, phead1);
                                            break;
                                        }
                                        case 3:
                                        {
                                            read_course(course2, phead1);
                                            break;
                                        }
                                        case 4:
                                        {
                                            read_course(course3, phead1);
                                            break;
                                        }
                                        case 5:
                                        {
                                            read_course(course4, phead1);
                                            break;
                                        }
                                        case 6:
                                        {
                                            read_course(course5, phead1);
                                            break;
                                        }
                                        case 7:
                                        {
                                            read_course(course6, phead1);
                                            break;
                                        }
                                        case 0:
                                            break;
                                            if (t4 != 0)
                                            {
                                                wcout << L"\n1. KỸ THUẬT LẬP TRÌNH  ";
                                                wcout << L"\n2. VI TÍCH PHÂN  ";
                                                wcout << L"\n3. VẬT LÝ ĐẠI CƯƠNG ";
                                                wcout << L"\n4. TRIẾT HỌC ";
                                                wcout << L"\n5. NHẬP MÔN LẬP TRÌNH ";
                                                wcout << L"\n6. KINH TẾ ĐẠI CƯƠNG ";
                                                wcout << L"\n7. TOÁN RỜI RẠC ";
                                                wcout << "\n0. Cancel\n";
                                                wcin >> t4;
                                                system("cls");
                                            }

                                        }
                                    }

                                    break;
                                }
                                case 0:  break;

                                }
                                if (t3 != 0)
                                {
                                    wcout << "\n1. Class list ";
                                    wcout << "\n2. Add new student(s) ";
                                    wcout << "\n3. Score ";
                                    wcout << "\n4. Score course ";
                                    wcout << "\n0. Cancel\n ";
                                    wcin >> t3;
                                    system("cls");
                                }
                            }
                            break;
                        }
                        case 2:
                        {
                            int t3;
                            wcout << "\n1. Class list ";
                            wcout << "\n2. Add new student(s) ";
                            wcout << "\n3. Score ";
                            wcout << "\n4. Score course";
                            wcout << "\n0. Cancel\n ";
                            wcin >> t3;
                            inputstudentscore(class2, phead);
                            system("cls");
                            while (t3 != 0)
                            {
                                switch (t3)
                                {
                                case 1:
                                {
                                    liststudent(phead);
                                    break;
                                }
                                case 2:
                                {
                                    addnewstudent(class2, phead);
                                    system("cls");
                                    liststudent(phead);
                                    break;
                                }
                                case 3:
                                {
                                    liststudentwithscore(phead);
                                    break;
                                }
                                case 4:
                                {
                                    int t4 = 1;
                                    while (t4 != 0)
                                    {
                                        phead1 = nullptr;
                                        wcout << L"\n1. KỸ THUẬT LẬP TRÌNH  ";
                                        wcout << L"\n2. VI TÍCH PHÂN  ";
                                        wcout << L"\n3. VẬT LÝ ĐẠI CƯƠNG ";
                                        wcout << L"\n4. TRIẾT HỌC ";
                                        wcout << L"\n5. NHẬP MÔN LẬP TRÌNH ";
                                        wcout << L"\n6. KINH TẾ ĐẠI CƯƠNG ";
                                        wcout << L"\n7. TOÁN RỜI RẠC ";
                                        wcout << "\n0. cancel\n";
                                        wcin >> t4;
                                        system("cls");
                                        switch (t4)
                                        {
                                        case 1:
                                        {
                                            read_course(course, phead1);
                                            break;
                                        }
                                        case 2:
                                        {
                                            read_course(course1, phead1);
                                            break;
                                        }
                                        case 3:
                                        {
                                            read_course(course2, phead1);
                                            break;
                                        }
                                        case 4:
                                        {
                                            read_course(course3, phead1);
                                            break;
                                        }
                                        case 5:
                                        {
                                            read_course(course4, phead1);
                                            break;
                                        }
                                        case 6:
                                        {
                                            read_course(course5, phead1);
                                            break;
                                        }
                                        case 7:
                                        {
                                            read_course(course6, phead1);
                                            break;
                                        }
                                        case 0:
                                            break;
                                            if (t4 != 0)
                                            {
                                                wcout << L"\n1. KỸ THUẬT LẬP TRÌNH  ";
                                                wcout << L"\n2. VI TÍCH PHÂN  ";
                                                wcout << L"\n3. VẬT LÝ ĐẠI CƯƠNG ";
                                                wcout << L"\n4. TRIẾT HỌC ";
                                                wcout << L"\n5. NHẬP MÔN LẬP TRÌNH ";
                                                wcout << L"\n6. KINH TẾ ĐẠI CƯƠNG ";
                                                wcout << L"\n7. TOÁN RỜI RẠC ";
                                                wcout << "\n0. Cancel\n";
                                                wcin >> t4;
                                                system("cls");
                                            }

                                        }
                                    }
                                    break;
                                }
                                case 0:
                                {
                                    break;
                                }
                                }
                                if (t3 != 0)
                                {
                                    wcout << "\n1. Class list ";
                                    wcout << "\n2. Add new student(s) ";
                                    wcout << "\n3. Score ";
                                    wcout << "\n4. Score course";
                                    wcout << "\n0. Cancel\n ";
                                    wcin >> t3;
                                    system("cls");
                                }
                            }
                            break;
                        }
                        case 3:
                        {
                            int t3;
                            wcout << "\n1. Class list ";
                            wcout << "\n2. Add new student(s) ";
                            wcout << "\n3. Score ";
                            wcout << "\n4. Score course";
                            wcout << "\n0. Cancel\n ";
                            wcin >> t3;
                            inputstudentscore(class3, phead);
                            system("cls");
                            while (t3 != 0)
                            {
                                switch (t3)
                                {
                                case 1:
                                {
                                    liststudent(phead);
                                    break;
                                }
                                case 2:
                                {
                                    addnewstudent(class3, phead);
                                    system("cls");
                                    liststudent(phead);
                                    break;
                                }
                                case 3:
                                {
                                    liststudentwithscore(phead);
                                    break;
                                }
                                case 4:
                                {
                                    int t4 = 1;
                                    while (t4 != 0)
                                    {
                                        phead1 = nullptr;
                                        wcout << L"\n1. KỸ THUẬT LẬP TRÌNH  ";
                                        wcout << L"\n2. VI TÍCH PHÂN  ";
                                        wcout << L"\n3. VẬT LÝ ĐẠI CƯƠNG ";
                                        wcout << L"\n4. TRIẾT HỌC ";
                                        wcout << L"\n5. NHẬP MÔN LẬP TRÌNH ";
                                        wcout << L"\n6. KINH TẾ ĐẠI CƯƠNG ";
                                        wcout << L"\n7. TOÁN RỜI RẠC ";
                                        wcout << "\n0. Cancel\n";
                                        wcin >> t4;
                                        system("cls");
                                        switch (t4)
                                        {
                                        case 1:
                                        {
                                            read_course(course, phead1);
                                            break;
                                        }
                                        case 2:
                                        {
                                            read_course(course1, phead1);
                                            break;
                                        }
                                        case 3:
                                        {
                                            read_course(course2, phead1);
                                            break;
                                        }
                                        case 4:
                                        {
                                            read_course(course3, phead1);
                                            break;
                                        }
                                        case 5:
                                        {
                                            read_course(course4, phead1);
                                            break;
                                        }
                                        case 6:
                                        {
                                            read_course(course5, phead1);
                                            break;
                                        }
                                        case 7:
                                        {
                                            read_course(course6, phead1);
                                            break;
                                        }
                                        case 0:
                                            break;
                                            if (t4 != 0)
                                            {
                                                wcout << L"\n1. KỸ THUẬT LẬP TRÌNH  ";
                                                wcout << L"\n2. VI TÍCH PHÂN  ";
                                                wcout << L"\n3. VẬT LÝ ĐẠI CƯƠNG ";
                                                wcout << L"\n4. TRIẾT HỌC ";
                                                wcout << L"\n5. NHẬP MÔN LẬP TRÌNH ";
                                                wcout << L"\n6. KINH TẾ ĐẠI CƯƠNG ";
                                                wcout << L"\n7. TOÁN RỜI RẠC ";
                                                wcout << "\n0. Cancel\n";
                                                wcin >> t4;
                                                system("cls");
                                            }

                                        }
                                    }
                                    break;
                                }
                                case 0:
                                {
                                    break;
                                }
                                }
                                if (t3 != 0)
                                {
                                    wcout << "\n1. Class list ";
                                    wcout << "\n2. Add new student ";
                                    wcout << "\n3. Score ";
                                    wcout << "\n4. Score course";
                                    wcout << "\n0. Cancel\n ";
                                    wcin >> t3;
                                    system("cls");
                                }
                            }
                            break;
                        }
                        case 4:
                        {
                            int t3;
                            wcout << "\n1. Class list ";
                            wcout << "\n2. Add new student ";
                            wcout << "\n3. Score ";
                            wcout << "\n4. Score course";
                            wcout << "\n0. Cancel\n ";
                            wcin >> t3;
                            inputstudentscore(class4, phead);
                            system("cls");
                            while (t3 != 0)
                            {
                                switch (t3)
                                {
                                case 1:
                                {
                                    liststudent(phead);
                                    break;
                                }
                                case 2:
                                {
                                    addnewstudent(class4, phead);
                                    system("cls");
                                    liststudent(phead);
                                    break;
                                }
                                case 3:
                                {
                                    liststudentwithscore(phead);
                                    break;
                                }
                                case 4:
                                {
                                    int t4 = 1;
                                    while (t4 != 0)
                                    {
                                        phead1 = nullptr;
                                        wcout << L"\n1. KỸ THUẬT LẬP TRÌNH  ";
                                        wcout << L"\n2. VI TÍCH PHÂN  ";
                                        wcout << L"\n3. VẬT LÝ ĐẠI CƯƠNG ";
                                        wcout << L"\n4. TRIẾT HỌC ";
                                        wcout << L"\n5. NHẬP MÔN LẬP TRÌNH ";
                                        wcout << L"\n6. KINH TẾ ĐẠI CƯƠNG ";
                                        wcout << L"\n7. TOÁN RỜI RẠC ";
                                        wcout << "\n0. Cancel\n";
                                        wcin >> t4;
                                        system("cls");
                                        switch (t4)
                                        {
                                        case 1:
                                        {
                                            read_course(course, phead1);
                                            break;
                                        }
                                        case 2:
                                        {
                                            read_course(course1, phead1);
                                            break;
                                        }
                                        case 3:
                                        {
                                            read_course(course2, phead1);
                                            break;
                                        }
                                        case 4:
                                        {
                                            read_course(course3, phead1);
                                            break;
                                        }
                                        case 5:
                                        {
                                            read_course(course4, phead1);
                                            break;
                                        }
                                        case 6:
                                        {
                                            read_course(course5, phead1);
                                            break;
                                        }
                                        case 7:
                                        {
                                            read_course(course6, phead1);
                                            break;
                                        }
                                        case 0:
                                            break;
                                            if (t4 != 0)
                                            {
                                                wcout << L"\n1. KỸ THUẬT LẬP TRÌNH  ";
                                                wcout << L"\n2. VI TÍCH PHÂN  ";
                                                wcout << L"\n3. VẬT LÝ ĐẠI CƯƠNG ";
                                                wcout << L"\n4. TRIẾT HỌC ";
                                                wcout << L"\n5. NHẬP MÔN LẬP TRÌNH ";
                                                wcout << L"\n6. KINH TẾ ĐẠI CƯƠNG ";
                                                wcout << L"\n7. TOÁN RỜI RẠC ";
                                                wcout << "\n0. Cancel\n";
                                                wcin >> t4;
                                                system("cls");
                                            }

                                        }
                                    }
                                    break;
                                }
                                case 0:
                                {
                                    break;
                                }
                                }
                                if (t3 != 0)
                                {
                                    wcout << "\n1. Class list ";
                                    wcout << "\n2. Add new student ";
                                    wcout << "\n3. score ";
                                    wcout << "\n4. score course";
                                    wcout << "\n0. cancel\n ";
                                    wcin >> t3;
                                    system("cls");
                                }

                            }
                            break;
                        }
                        case 0: break;
                        }
                        if (t2 != 0)
                        {
                            wcout << "\n1. Class 20CLC1 ";
                            wcout << "\n2. Class 20CLC2 ";
                            wcout << "\n3. Class 20CLC3 ";
                            wcout << "\n4. Class 20CLC4 ";
                            wcout << "\n0. Back\n ";
                            wcin >> t2;
                            system("cls");
                        }
                    }
                    break;
                }
                case 2:
                    menu(thaotac, 4);
                    break;
                case 0: break;

                }
                if (t1 != 0)
                {
                    wcout << "\n1. Class  ";
                    wcout << "\n2. Course ";
                    wcout << "\n0. Cancel \n";
                    int t1;
                    wcin >> t1;
                    system("cls");
                }
                
                break;
            }
            break;
        }
        case 2:
        {
            wcout << "No data ";
            break;
        }
        case 3:
        {
            wcout << "No data ";
            break;
        }
        case 4:
        {
            wcout << "No data ";
            break;
        }
        case 0: break;
        }
        if (n != 0)
        {
            wcout << "\nschool year: " << endl;
            wcout << "1. 2020-2021\n     1st year student \n";
            wcout << "2. 2021-2022\n     2st year student \n";
            wcout << "3. 2022-2023\n     3st year student \n";
            wcout << "4. 2023-2024\n     4st year student \n";
            wcout << "0. cancel\n";
            wcin >> n;
            system("cls");
        }
    }
}

int main() {
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    HANDLE hdlConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_FONT_INFOEX consoleFont;
    consoleFont.cbSize = sizeof(consoleFont);
    GetCurrentConsoleFontEx(hdlConsole, FALSE, &consoleFont);
    memcpy(consoleFont.FaceName, L"Consolas", sizeof(consoleFont.FaceName));
    STUDENT K[N], * T = nullptr;
    STAFF F, * S = nullptr;
    STAFF* phead = nullptr, * phead1 = nullptr;
    wstring filestudent = L"input.csv";
    wstring readfile = L"enrollstaff.csv", writefile = L"writestudentenrollcourse.csv";
    wstring class4 = L"20CLC04.csv";
    wstring course = L"DiemMon7.csv";
    wstring course1 = L"DiemMon1.csv";
    wstring course2 = L"DiemMon2.csv";
    wstring course3 = L"DiemMon3.csv";
    wstring course4 = L"DiemMon4.csv";
    wstring course5 = L"DiemMon5.csv";
    wstring course6 = L"DiemMon6.csv";
    wstring x;
    int n, t = 1;
    while (t != 0) {
        wcout << "1) STAFF" << endl;
        wcout << "2) STUDENT" << endl;
        wcout << "0) Break" << endl;
        wcout << "Please choose staff or student:" << endl;
        wcin >> t;
        system("cls");
        wcin.ignore(1000, '\n');
        switch (t)
        {
        case 1: {
            login_staff(F);
            menu1();
            break;
        }
        case 2: {
            input_student(K, n, filestudent);
            login_student(K, n);
            int n = 1;
            while (n != 0) {
                S = nullptr;
                T = nullptr;
                wcout << endl;
                wcout << "1. Enroll course " << endl;
                wcout << "2. Remove course" << endl;
                wcout << "3. View list of your course" << endl;
                wcout << "4. View list of classes" << endl;
                wcout << "5. View list of students in your class" << endl;
                wcout << "6. View list of courses" << endl;
                wcout << "7. View list of students in your course" << endl;
                wcout << "8. View list score of your course" << endl;
                wcout << "0. Break" << endl;
                wcin >> n;
                system("cls");
                switch (n)
                {
                case 1: {
                    read_file_course_staff(S, readfile);
                    student_enroll_course(T, S);
                    output_enroll_course_student(T);
                    write_student_enroll_course(T, writefile);
                    break;
                }
                case 2: {
                    read_file_courses_student(T, writefile);
                    output_enroll_course_student(T);
                    wcout << "Please input course to remove (exit if input 0): ";
                    wcin >> x;
                    while (x != L"0") {
                        remove_course_student(T, x);
                        output_enroll_course_student(T);
                        wcout << "Please input course to remove (exit if input 0): ";
                        wcin >> x;
                    }
                    output_enroll_course_student(T);
                    write_student_enroll_course(T, writefile);
                    break;
                }
                case 3: {
                    read_file_courses_student(T, writefile);
                    output_enroll_course_student(T);
                    break;
                }
                case 4: {
                    wcout << "\n1. Class 20CLC1 ";
                    wcout << "\n2. Class 20CLC2 ";
                    wcout << "\n3. Class 20CLC3 ";
                    wcout << "\n4. Class 20CLC4 ";
                    break;
                }
                case 5: {
                    inputstudentscore(class4, phead);
                    liststudent(phead);
                    break;
                }
                case 6: {
                    read_file_course_staff(S, readfile);
                    output_enroll_course_staff(S);
                    break;
                }
                case 7: {
                    wstring course1 = L"course1.csv";
                    wstring course2 = L"course2.csv";
                    wstring course3 = L"course3.csv";
                    wstring course4 = L"course4.csv";
                    wstring course5 = L"course5.csv";
                    wstring course6 = L"course6.csv";
                    wstring course7 = L"course7.csv";
                    int t = 1;
                    while (t != 0) {
                        phead = nullptr;
                        wcin.ignore();
                        wcout << L"\n1. KỸ THUẬT LẬP TRÌNH  ";
                        wcout << L"\n2. VI TÍCH PHÂN  ";
                        wcout << L"\n3. VẬT LÝ ĐẠI CƯƠNG ";
                        wcout << L"\n4. TRIẾT HỌC ";
                        wcout << L"\n5. NHẬP MÔN LẬP TRÌNH ";
                        wcout << L"\n6. KINH TẾ ĐẠI CƯƠNG ";
                        wcout << L"\n7. TOÁN RỜI RẠC ";
                        wcout << "\n0. Cancel\n";
                        wcin >> t;
                        system("cls");
                        switch (t)
                        {
                        case 1: {
                            read_student_a_course(course1, phead);
                            liststudent(phead);
                            break;
                        }
                        case 2: {
                            read_student_a_course(course2, phead);
                            liststudent(phead);
                            break;
                        }
                        case 3: {
                            read_student_a_course(course3, phead);
                            liststudent(phead);
                            break;
                        }
                        case 4: {
                            read_student_a_course(course4, phead);
                            liststudent(phead);
                            break;
                        }
                        case 5: {
                            read_student_a_course(course5, phead);
                            liststudent(phead);
                            break;
                        }
                        case 6: {
                            read_student_a_course(course6, phead);
                            liststudent(phead);
                            break;
                        }
                        case 7: {
                            read_student_a_course(course7, phead);
                            liststudent(phead);
                            break;
                        }
                        case 0:break;
                        }
                    }
                }
                case 8: {
                    int t4 = 1;
                    while (t4 != 0)
                    {
                        phead1 = nullptr;
                        wcout << L"\n1. KỸ THUẬT LẬP TRÌNH  ";
                        wcout << L"\n2. VI TÍCH PHÂN  ";
                        wcout << L"\n3. VẬT LÝ ĐẠI CƯƠNG ";
                        wcout << L"\n4. TRIẾT HỌC ";
                        wcout << L"\n5. NHẬP MÔN LẬP TRÌNH ";
                        wcout << L"\n6. KINH TẾ ĐẠI CƯƠNG ";
                        wcout << L"\n7. TOÁN RỜI RẠC ";
                        wcout << "\n0. Cancel\n";
                        wcin >> t4;
                        system("cls");
                        switch (t4)
                        {
                        case 1:
                        {
                            read_course(course, phead1);
                            break;
                        }
                        case 2:
                        {
                            read_course(course1, phead1);
                            break;
                        }
                        case 3:
                        {
                            read_course(course2, phead1);
                            break;
                        }
                        case 4:
                        {
                            read_course(course3, phead1);
                            break;
                        }
                        case 5:
                        {
                            read_course(course4, phead1);
                            break;
                        }
                        case 6:
                        {
                            read_course(course5, phead1);
                            break;
                        }
                        case 7:
                        {
                            read_course(course6, phead1);
                            break;
                        }
                        case 0:
                            break;

                        }
                    }
                }
                case 0:break;
                }
            }
        }
        case 0:break;

        }
        }
        delete_student_enroll_course(T);
        delete_enroll_staff(S);
        return 0;
}
