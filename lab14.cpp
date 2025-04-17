#include <iostream>
#include <fstream>
using namespace std;
#include <string>
#include <cmath>
// problem1
// int main() {
//     ofstream file("output.txt");
//     file << "Hello, File!";
//     file.close();
//     return 0;
// }
// problem2
// int main() {
//     ifstream file("greeting.txt");
//     string line;
//
//     while (getline(file, line)) {
//         cout << line << endl;
//     }
//
//     file.close();
//     return 0;
// }
// problem3
// int main() {
//     string name;
//     int age;
//
//     cout << "Enter your name: ";
//     cin >> name;
//     cout << "Enter your age: ";
//     cin >> age;
//
//     ofstream file("user.txt");
//     file << name << " " << age;
//     file.close();
//
//     return 0;
// }
//problem 4
// int main() {
//     ifstream file("data.txt");
//     string line;
//
//     while (getline(file, line)) {
//         cout << line << endl;
//     }
//
//     file.close();
//     return 0;
// }
//problem5
// int main() {
//     ifstream source("source.txt");
//     ofstream target("target.txt");
//     string line;
//
//     while (getline(source, line)) {
//         target << line << endl;
//     }
//
//     source.close();
//     target.close();
//
//     return 0;
// }
// problem 6
// int main() {
//     ifstream file("essay.txt");
//     string word;
//     int count = 0;
//
//     while (file >> word) {
//         count++;
//     }
//
//     cout << "Total words: " << count << endl;
//     file.close();
//
//     return 0;
// }
//problem 7
// int main() {
//     ifstream file("numbers.txt");
//     int number, sum = 0;
//
//     while (file >> number) {
//         sum += number;
//     }
//
//     cout << "Sum: " << sum << endl;
//     file.close();
//
//     return 0;
// }
// problem 8
// int main() {
//     ifstream file("values.txt");
//     int number, maxVal, minVal;
//
//     if (file >> number) {
//         maxVal = minVal = number;
//     }
//
//     while (file >> number) {
//         if (number > maxVal) maxVal = number;
//         if (number < minVal) minVal = number;
//     }
//
//     cout << "Max: " << maxVal << ", Min: " << minVal << endl;
//     file.close();
//
//     return 0;
// }
// problem 9
// struct Student {
//     int id;
//     char name[20];
//     float gpa;
// };
// int main() {
//     Student s;
//     cout << "Enter ID, Name, GPA: ";
//     cin >> s.id >> s.name >> s.gpa;
//     ofstream file("student.txt");
//     file << s.id << " " << s.name << " " << s.gpa;
//     file.close();
//     return 0;
// }
// problem 10
// struct Student {
//     int id;
//     char name[20];
//     float gpa;
// };
// int main() {
//     Student s;
//     ifstream file("student.txt");
//     file >> s.id >> s.name >> s.gpa;
//     cout << "ID: " << s.id << ", Name: " << s.name << ", GPA: " << s.gpa << endl;
//     file.close();
//     return 0;
// }
// problem 11
// struct Student {
//     int id;
//     char name[20];
//     float gpa;
// };
// int main() {
//     Student students[3];
//     for (int i = 0; i < 3; i++) {
//         cout << "Enter ID, Name, GPA for student " << i + 1 << ": ";
//         cin >> students[i].id >> students[i].name >> students[i].gpa;
//     }
//     ofstream file("class.txt");
//     for (int i = 0; i < 3; i++) {
//         file << students[i].id << " " << students[i].name << " " << students[i].gpa << endl;
//     }
//     file.close();
//     return 0;
// }
// problem 12
// struct Student {
//     int id;
//     char name[20];
//     float gpa;
// };
// int main() {
//     Student s;
//     ifstream file("class.txt");
//     while (file >> s.id >> s.name >> s.gpa) {
//         cout << "ID: " << s.id << ", Name: " << s.name << ", GPA: " << s.gpa << endl;
//     }
//     file.close();
//     return 0;
// }
// problem 13
// struct Date {
//     int day;
//     int month;
//     int year;
// };
// int main() {
//     Date d;
//     cout << "Enter day, month, year: ";
//     cin >> d.day >> d.month >> d.year;
//     cout << (d.day < 10 ? "0" : "") << d.day << "-"
//          << (d.month < 10 ? "0" : "") << d.month << "-"
//          << d.year << endl;
//
//     return 0;
// }
// problem14
// struct StudentInfo {
//     int id;
//     int age;
//     char gender;
//     float cga;
// };
// int main() {
//     StudentInfo s = {240385, 19, 'F', 4.5};
//
//     cout << "Id: " << s.id << ", Age: " << s.age
//          << ", Gender: " << s.gender << ", CGA: " << s.cga << endl;
//     return 0;
// }
// problem 15
// struct StudentGrade {
//     int lab[5];
//     int homework[3];
//     int exam[2];
// };
// int main() {
//     StudentGrade s;
//     int total = 0;
//     float average;
//     cout << "Enter 5 lab grades: ";
//     for (int i = 0; i < 5; i++) {
//         cin >> s.lab[i];
//         total += s.lab[i];
//     }
//     cout << "Enter 3 homework grades: ";
//     for (int i = 0; i < 3; i++) {
//         cin >> s.homework[i];
//         total += s.homework[i];
//     }
//     cout << "Enter 2 exam grades: ";
//     for (int i = 0; i < 2; i++) {
//         cin >> s.exam[i];
//         total += s.exam[i];
//     }
//     average = total / 10.0;
//     cout << "Total: " << total << ", Average: " << average << endl;
//     return 0;
// }
// //problem 16
// struct StudentInfo {
//     int id;
//     int age;
//     char gender;
//     float cga;
// };
// int main() {
//     StudentInfo students[3];
//     for (int i = 0; i < 3; i++) {
//         cout << "Enter ID, Age, Gender, CGA for student " << i + 1 << ": ";
//         cin >> students[i].id >> students[i].age >> students[i].gender >> students[i].cga;
//     }
//     for (int i = 0; i < 3; i++) {
//         cout << "Student " << i + 1 << ": Id=" << students[i].id
//              << ", Age=" << students[i].age << ", Gender=" << students[i].gender
//              << ", CGA=" << students[i].cga << endl;
//     }
//     return 0;
// }
// problem 17
// struct Student {
//     char name[20];
// };
// int main() {
//     Student students[3];
//     for (int i = 0; i < 3; i++) {
//         cout << "Enter name for student " << i + 1 << ": ";
//         cin >> students[i].name;
//     }
//     cout << "Names starting with 'A':" << endl;
//     for (int i = 0; i < 3; i++) {
//         if (students[i].name[0] == 'A' || students[i].name[0] == 'a') {
//             cout << students[i].name << endl;
//         }
//     }
//     return 0;
// }
// problem 18
// struct Student {
//     char name[20];
//     float gpa;
// };
// int main() {
//     Student students[3], topStudent;
//     topStudent.gpa = 0;
//     for (int i = 0; i < 3; i++) {
//         cout << "Enter name and GPA for student " << i + 1 << ": ";
//         cin >> students[i].name >> students[i].gpa;
//         if (students[i].gpa > topStudent.gpa) {
//             topStudent = students[i];
//         }
//     }
//     cout << "Top student: " << topStudent.name << " with GPA: " << topStudent.gpa << endl;
//     return 0;
// }
// problem 19
// struct Date {
//     int day;
//     int month;
//     int year;
// };
// struct BankAccount {
//     char name[15];
//     int accountNo;
//     float balance;
//     Date birthday;
// };
// int main() {
//     BankAccount b;
//     cout << "Enter Name: ";
//     cin >> b.name;
//     cout << "Enter Account No: ";
//     cin >> b.accountNo;
//     cout << "Enter Balance: ";
//     cin >> b.balance;
//     cout << "Enter Birthday (day month year): ";
//     cin >> b.birthday.day >> b.birthday.month >> b.birthday.year;
//     cout << "Name: " << b.name
//          << ", Account No: " << b.accountNo
//          << ", Balance: " << b.balance
//          << ", Birthday: ";
//     if (b.birthday.day < 10) cout << "0";
//     cout << b.birthday.day << "-";
//     if (b.birthday.month < 10) cout << "0";
//     cout << b.birthday.month << "-" << b.birthday.year << endl;
//     return 0;
// }
// problem 20
// struct Point {
//     float x;
//     float y;
// };
// struct Line {
//     Point p1;
//     Point p2;
// };
// int main() {
//     Line line;
//     cout << "Enter x and y for Point 1: ";
//     cin >> line.p1.x >> line.p1.y;
//     cout << "Enter x and y for Point 2: ";
//     cin >> line.p2.x >> line.p2.y;
//     float dx = line.p2.x - line.p1.x;
//     float dy = line.p2.y - line.p1.y;
//     float distance = sqrt(dx * dx + dy * dy);
//     cout << "Distance = " << distance << endl;
//     return 0;
// }
// //problem21
// struct Point {
//     float x;
//     float y;
// };
// struct Triangle {
//     Point a;
//     Point b;
//     Point c;
// };
// float distance(Point p1, Point p2) {
//     float dx = p2.x - p1.x;
//     float dy = p2.y - p1.y;
//     return sqrt(dx * dx + dy * dy);
// }
// int main() {
//     Triangle t;
//     cout << "Enter coordinates for Point A (x y): ";
//     cin >> t.a.x >> t.a.y;
//     cout << "Enter coordinates for Point B (x y): ";
//     cin >> t.b.x >> t.b.y;
//     cout << "Enter coordinates for Point C (x y): ";
//     cin >> t.c.x >> t.c.y;
//     float ab = distance(t.a, t.b);
//     float bc = distance(t.b, t.c);
//     float ca = distance(t.c, t.a);
//     float p = ab + bc + ca;
//     cout << "Perimeter = " << p << endl;
//     return 0;
// }
// problem 22
// struct Point {
//     int x;
//     int y;
// };
// struct Square {
//     Point vertex[4];
// };
// int main() {
//     Square s;
//     cout << "Enter 4 vertices of the square (x y):" << endl;
//     for (int i = 0; i < 4; i++) {
//         cout << "Vertex " << i + 1 << ": ";
//         cin >> s.vertex[i].x >> s.vertex[i].y;
//     }
//     int side = abs(s.vertex[0].x - s.vertex[2].x);
//     int area = side * side;
//     cout << "Area = " << area << endl;
//     return 0;
// }
// problem23
// struct StudentGrade {
//     int lab;
//     int homework;
//     int exam;
//     int total;
// };
// int main() {
//     StudentGrade students[3];
//     for (int i = 0; i < 3; i++) {
//         cout << "Enter Lab, Homework, and Exam grades for Student " << i + 1 << ": ";
//         cin >> students[i].lab >> students[i].homework >> students[i].exam;
//         students[i].total = students[i].lab + students[i].homework + students[i].exam;
//     }
//     int topIndex = 0;
//     for (int i = 1; i < 3; i++) {
//         if (students[i].total > students[topIndex].total) {
//             topIndex = i;
//         }
//     }
//     cout << "Student " << topIndex + 1 << " has the highest total: " << students[topIndex].total << endl;
//     return 0;
// }
//problem 24
// struct Contact {
//     char name[30];
//     char phone[15];
//     char email[30];
// };
// int main() {
//     Contact contacts[10];
//     cout << "Enter details for 10 contacts: ";
//     for (int i = 0; i < 10; i++) {
//         cout << "Contact " << i + 1 << ": ";
//         cout << "Name: ";
//         cin >> contacts[i].name;
//         cout << "Phone: ";
//         cin >> contacts[i].phone;
//         cout << "Email: ";
//         cin >> contacts[i].email;
//     }
//     char searchName[30];
//     cout << " Enter name to search: ";
//     cin >> searchName;
//     bool found = false;
//     for (int i = 0; i < 10; i++) {
//         if (strcmp(contacts[i].name, searchName) == 0) {
//             cout << contacts[i].name << ", " << contacts[i].phone << ", " << contacts[i].email << endl;
//             found = true;
//             break;
//         }
//     }
//     if (!found) {
//         cout << "Contact not found." << endl;
//     }
//     return 0;
// }