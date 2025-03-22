#include <iostream>
#include <cmath>
using namespace std;

// int main() { //problem1
//     int n;
//     cin >> n;
//
//     if (n < 0) {
//         cout << "Negative number\n";
//     } else {
//         cout << "Positive number\n";
//     }
//
//     return 0;
// }
// int main() { //problem2
//     int a;
//     cin >> a;
//     if (a%2==0)
//         {
//             cout<<"Even number\n"
//         }
//         else {
//             cout<<"Odd number\n"
//         }
// }
// int main() { //problem3
//     int a,b;
//     cin>>a>>b;
//     if (a>b) {
//         cout<<a<<" is greater than b"<<b<<endl;;
//     }
//     else if (a<b) {
//         cout<<a<<" is less than "<<b<<endl;;
//     }
//     else {
//         cout<<"They are equal\n";
//     }
//     return 0;
// }
// int main() { //problem4
//     int a,b,c;
//     cin>>a>>b>>c;
//     if (a>b && a>c) {
//         cout<<a<<" is largest";
//     }
//     else if (b>a && b>c) {
//         cout<<b<<" is largest";
//     }
//     else if (c>a && c>b) {
//         cout<<c<<" is largest";
//     }
//     return 0;
// }
// int main() { //problem5
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;
//
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         cout << year << " is a leap year.\n";
//     } else {
//         cout << year << " is not a leap year.\n";
//     }
//
//     return 0;
// }
// int main() { //problem 6
//     int speed;
//     cin >> speed;
//     if (speed < 20) {
//         cout << "too slow "<< endl;
//     }
//     else if (speed > 80) {
//         cout << "too fast "<< endl;
//     }
//     else {
//         cout << "just right" << endl;
//     }
//     return 0;
// }
// int main() { //problem7
//     int marks;
//     cin >> marks;
//     if (marks < 50) {
//         cout << "Fail" << endl;
//     }
//     else {
//         cout << "Pass" << endl;
//     }
//     return 0;
// }
// int main() { //problem 8
//     int number;
//     cin >> number;
//     if (number > 0) {
//         cout << "positive" << endl;
//     }
//     else if (number < 0) {
//         cout << "negative" << endl;
//     }
//     else {
//         cout << "zero" << endl;
//     }
//     return 0;
// }
// int main() { //problem9
//     char ch;
//     cout << "Enter a character g or y or r ";
//     cin >> ch;
//     if (ch=='g' || ch=='G') {
//         cout << "Go" << endl;
//     }
//     else if (ch=='y'|| ch=='G') {
//         cout << "Ger ready" << endl;
//     }
//     else if (ch=='r' || ch=='R') {
//         cout << "Stop" << endl;
//     }
//     else {
//         cout << "Error" << endl;
//     }
//     return 0;
// }
// int main() { //problem4 improved version
//     int a, b, c;
//     cout << "Enter three numbers: ";
//     cin >> a >> b >> c;
//
//     int largest; // Eng katta sonni saqlash uchun
//
//     if (a >= b) {
//         if (a >= c) {
//             largest = a;
//         } else {
//             largest = c;
//         }
//     } else {
//         if (b >= c) {
//             largest = b;
//         } else {
//             largest = c;
//         }
//     }
//
//     cout << "The largest number is: " << largest << endl;
//
//     return 0;
// }
// int main() { //problem 10
//     int grade;
//     cout << "Enter your grade (0-100): ";
//     cin >> grade;
//
//     if (grade >= 90 && grade <= 100) {
//         cout << "Grade: A\n";
//     } else if (grade >= 80 && grade <= 89) {
//         cout << "Grade: B\n";
//     } else if (grade >= 70 && grade <= 79) {
//         cout << "Grade: C\n";
//     } else if (grade >= 60 && grade <= 69) {
//         cout << "Grade: D\n";
//     } else if (grade >= 0 && grade <= 59) {
//         cout << "Grade: F\n";
//     } else {
//         cout << "Invalid input! Please enter a grade between 0 and 100.\n";
//     }
//
//     return 0;
// }
// int main(){ //problem11
//     int a,b;
//     cin>>a>>b;
//     if(a%b==0) {
//         cout<<a<<"is divisible by "<<b<<endl;
//     }
//     else {
//         cout<<a<<" is not divisible by "<<b<<endl;
//     }
//     return 0;
// }
// int main(){ //problem12
//     int a,b,c;
//     cin>>a>>b>>c;
//     if (a > 0 && b > 0 && c > 0 && (a + b + c == 180)) {
//         cout << " The triangle is valid.\n";
//     } else {
//         cout << "The triangle is not valid.\n";
//     }
//     return 0;
// }
// int main() { //problem13
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;
//     if (ch >= 'a' && ch <= 'z') {
//         cout << "The entered character is a Lowercase letter.\n";
//     } else if (ch >= 'A' && ch <= 'Z') {
//         cout << "The entered character is an Uppercase letter.\n";
//     } else {
//         cout << "The entered character is NOT an alphabet.\n";
//     }
//     return 0;
// }
// int main() { //problem14
//     double w1, p1, w2, p2;
//     cout << "Enter weight and price of package 1: ";
//     cin >> w1 >> p1;
//     cout << "Enter weight and price of package 2: ";
//     cin >> w2 >> p2;
//     double PerKg1 = p1 / w1;
//     double PerKg2 = p2 / w2;
//     cout << "Price per kg of package 1: " << PerKg1 << endl;
//     cout << "Price per kg of package 2: " << PerKg2 << endl;
//     if (PerKg1 < PerKg2) {
//         cout << "Package 1 has a better price.\n";
//     } else if (PerKg2 < PerKg1) {
//         cout << "Package 2 has a better price.\n";
//     } else {
//         cout << "Both packages have the same price per kg.\n";
//     }
//
//     return 0;
// }
// int main() { //problem15
//     int num;
//     cout << "Enter a three-digit number: ";
//     cin >> num;
//     if (num < 100 || num > 999) {
//         cout << "Invalid input! Please enter a three-digit number.\n";
//     } else {
//         int firstDigit = num / 100;
//         int lastDigit = num % 10;
//         if (firstDigit == lastDigit) {
//             cout << num << " is a palindrome number.\n";
//         } else {
//             cout << num << " is NOT a palindrome number.\n";
//         }
//     }
//     return 0;
// }
// int main() { //problem 16
//     int x,y;
//     cout<<"Please enter x and y:";
//     cin>>x>>y;
//     if (sqrt(x * x + y * y)<=10) {
//         cout<<"Point "<<x<<" "<<y<<" is in the circle"<<endl;
//     }
//     else{
//         cout<<"Point "<<x<<" "<<y<<" is not in the circle"<<endl;
//     }
//     return 0;
// }





