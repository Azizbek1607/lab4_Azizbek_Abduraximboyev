#include <iostream>
using namespace std;
#include <cmath>
// int main() { //problem 1.1
//     for(int i=1;i<=10;i++) {
//         cout<<i<<" ";
//     };
//     return 0;
// }
// int main() { //problem 1.2
//     int n;
//     cin>>n;
//     for (int i = 0; i <= n; i++) {
//         cout<<i<<" ";
//     }
//     return 0;
// }
// int main() { //problem 1.3
//     int total=0;
//     for (int i=0; i<=10; i++) {
//         total+=i;
//     }
//     cout<<total;
//     return 0;
// }
// int main() { //problem 1.4
//     int n,total=0;
//     cin>>n;
//     for(int i=0; i<=n; i++) {
//         total+=i;
//     }
//     cout<<total;
//     return 0;
// }
// int main() { //problem 1.6
//     float n,total=0;
//     cin>>n;
//     for(int i=1; i<=n; i++) {
//         total+=i;
//     }
//     cout<<"Average is "<<total/n<<endl;
//     return 0;
// }
// int main() { //problem 2.1
//     for (int i =1; i<=10; i++) {
//         if (i%2!=0) {
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }
// int main() {
//     //problem 2.2
//     for (int i =1; i<=10; i++) {
//         if (i%2==0) {
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }
// int main() { //problem 2.3
//     int n;
//     cin>>n;
//     for (int i = 0; i <= n; i++) {
//         if (i % 2 != 0) {
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }
// int main() { //problem 2.5
//     for (int i = 1; i <= 100; i++) {
//         if (i % 10 == 0) {
//             cout << i << endl;
//         }
//     }
//     return 0;
// }
// int main() { //problem 2.6
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++) {
//         if (i % 10 == 0) {
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }
// int main() { //problem 3
//     for (char c = 'A'; c <= 'Z'; c++) {
//         cout << c;
//         if ( int(c) %5 == 4)
//             cout << endl;
//         else
//             cout<<" ";
//     }
//     return 0;
// }
// int main() { //problem 4
//     int n,fact=1;
//     cin>>n;
//     if (n>0) {
//         for (int i=1; i<=n; i++) {
//             fact=fact*i;
//         }
//         cout<<"Factorial of "<<n<<" is "<<fact;
//     }
//     else
//         cout<<"Cant calculate factorial \n";
//     return 0;
// }
// int main() { //problem5
//     float grade,credit,total=0,n,ctotal=0;
//     cin>>n;
//     for (int i = 1; i <=n; i++) {
//         cout<<"Enter Grade: ";
//         cin>>grade;
//         cout<<"Enter Credit: ";
//         cin>>credit;
//         total=total+credit*grade;
//         ctotal=ctotal+credit;
//     }
//     cout<<"Your total GPA: "<<total/ctotal;
//     return 0;
// }
// int main() { //my own problem
//     float tmark=0,clas,grade,credit,total=0,avg,n,ctotal=0;
//     cout<<"enter num of classes ";
//     cin>>clas;
//     for (int i=1; i <= clas; i++) {
//         cout<<"Enter number of students in a class : \n";
//         cin>>n;
//         for (int j = 1; j <=n; j++) {
//             cout<<"Enter Grade: ";
//             cin>>grade;
//             cout<<"Enter Credit: ";
//             cin>>credit;
//             total=total+credit*grade;
//             ctotal=ctotal+credit;
//         }
//         avg=total/ctotal;
//         tmark+=avg;
//         cout<<"Average GPA for class "<<i<<" is "<<avg;
//     }
//     return 0;
// }
// int main() {//problem 7
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// int main() { //problem 8
//      int n;
//      cin>>n;
//      for (int i = 1; i <= n; i++) {
//           for (int j = 1; j <= i; j++) {
//                cout << "* ";
//           }
//           cout << endl;
//      }
//      return 0;
// }
// int main() { //problem switch
//     int a,b,n;
//     cout<<"Enter a numbers: ";
//     cin>>a;
//     cin>>b;
//     cout <<"Enter number from 1 to 4"<<endl;
//     cin>>n;
//     switch(n){
//         case 1:
//             cout<<a+b<<endl;
//             break;
//         case 2:
//             cout<<a-b<<endl;
//             break;
//         case 3:
//              cout<<a*b<<endl;
//              break;
//         case 4:
//              cout<<a/b<<endl;
//              break;
//         default:
//             cout<<"Invalid Input pls try again"<<endl;
//     return 0;
//     }
//}
// int main() { //problem9
//     int n,c=0;
//     cin>>n;
//     if (n>0) {
//         for(int i=1; i<=n; i++) {
//             if (n%i==0) {
//                 c+=1;
//             }
//         }
//         if (c>2) {
//             cout<<"Number is not prime"<<endl;
//         }
//         else
//             cout<<"Number is prime"<<endl;
//     }
//     return 0;
// }
// int main() { //problem 10
//     int n,total=0;
//     cin>>n;
//     for(int i=1; i<=n; i++) {
//         total=total+i*i;
//     }
//     cout<<total;
//     return 0;
// }
// int main() { //problem 12
//     int n, digit;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Digits in reverse order: ";
//     while (n > 0) {
//         digit = n % 10;  // Get the last digit
//         cout << digit;
//         n /= 10;  // Remove the last digit
//     }
//     return 0;
// }
// int main() { //problem 13
//      int n;
//      cin>>n;
//      for (int i = 1; i <= n; i++) {
//           for (int j = 0; j < i; j++) {
//                cout << i;
//           }
//           cout << endl;
//      }
//      return 0;
// }
// int main() { //problem 14
//     long long binary;
//     int decimal = 0, power = 0;
//     cout << "Enter a binary number: ";
//     cin >> binary;
//     for (; binary > 0; binary /= 10, power++) {
//         if (binary % 10 > 1) return cout << "Invalid binary number!\n", 1;
//         decimal += (binary % 10) * pow(2, power);
//     }
//     cout << "Decimal equivalent: " << decimal << endl;
//     return 0;
// }







