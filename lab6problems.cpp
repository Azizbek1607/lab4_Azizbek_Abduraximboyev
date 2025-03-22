#include <iostream>
using namespace std;
// int main() { //problem 1 a
//     int sum=0;
//     for(int i=1;i<=100;i++) {
//         sum+=i;
//     }
//     cout<<sum;
// }
// int main() { //problem 1 b
//     int n,sum=0,i=0;
//     cin>>n;
//     if (n>=1) {
//         while (i<=n) {
//             sum+=i;
//             i++;
//         }
//         cout << sum << endl;
//     }
//     else {
//         cout <<"Enter a positive number\n";
//     }
//     return 0;
// }
// int main() { //problem 2 a
//     int n,c=0;
//     cin>>n;
//     for (int i = 1; i <= n; i++) {
//         if (n%i==0) {
//             c+=1;
//         }
//     }
//     if (c>2) {
//         cout<<"Number is not prime"<<endl;
//     }
//     else {
//         cout<<"Number is prime"<<endl;
//     }
//     return 0;
// }
// int main() { //problem 2 b
//     int n,c=0,i=1;
//     cin>>n;
//     while (i <= n) {
//         if (n%i==0) {
//             c+=1;
//         }
//             i++;
//
//     }
//     if (c>2) {
//         cout<<"Number is not prime"<<endl;
//     }
//     else {
//         cout<<"Number is prime"<<endl;
//     }
//     return 0;
// }
// int main() { //problem 3
//     int n;
//     cin>>n;
//     if (n > 1) {
//         cout << "Collatz sequence: " << n << " ";
//         while (n != 1) {
//             if (n % 2 == 0) {
//                 n = n / 2;
//             } else {
//                 n = 3 * n + 1;
//             }
//             cout << " " << n << " ";
//         }
//         cout << endl;
//     } else {
//         cout << "Enter a number greater than 1." << endl;
//     }
//     return 0;
// }
// int main() {
//     //problem 4
//     int n,c=0;
//     cin>>n;
//     if (n>0) {
//         while (n%10!=0) {
//             n=n/10;
//             c++;
//
//         }
//         cout<<c<<endl;
//     }
//     else {
//         cout<<"Enter a positive number\n";
//     }
//     return 0;
// }
// int main() {    // Problem 5
//     int n;
//     cin >> n;
//     if (n > 0) {
//         while (n > 0) {
//             int digit = n % 10;  // Get the last digit
//             cout << digit<<" ";  // Print the digit
//             n = n / 10;  // Remove the last digit
//         }
//     } else {
//         cout << "Enter a positive number\n";
//     }
//     return 0;
// }
// int main() { //problem 6
//     int a, b;
//     cout << "Enter two positive integers: ";
//     cin >> a >> b;
//     while (b != 0) {
//         int remainder = a % b;
//         a = b;
//         b = remainder;
//     }
//     cout << "GCD is: " << a << endl;
//     return 0;
// }
// int main() {  // problem 7
//     int n, sum = 0, c = 0;
//     while (sum <= 100) {
//         cout << "Enter a number: ";
//         cin >> n;
//         sum += n;
//         c++;
//     }
//     cout << "Sum exceeded 100. Total sum: " << sum << endl;
//     cout << "Total numbers entered: " << c << endl;
//     return 0;
// }
// int main() { //problem 8
//     int b=500,n;
//     do {
//         cout<<"Enter withdrawal amount: \n";
//         cin>>n;
//         if (n<b) {
//             b=b-n;
//             cout<<"Your current balance: "<<b<<endl;
//         }
//         else {
//             cout<<"Can't withdraw \n";
//         }
//     }while (n!=0);
//     return 0;
// }
// int main() { //problem 9
//     char character;
//     do {
//         cin >> character;
//         if (character =='Y' || character=='N') {
//             cout<<"Accepted"<<endl;
//         }
//         else {
//             cout<<"Rejected"<<endl;
//         }
//     }while (character!='Y' && character!='N');
//     return 0;
// }
// int main() { //problem 10
//     int choice;
//     do {
//         cout << "\n===== ATM MENU =====" << endl;
//         cout << "1: Withdraw" << endl;
//         cout << "2: Deposit" << endl;
//         cout << "3: Check Balance" << endl;
//         cout << "4: Exit" << endl;
//         cout << "Select an option (1-4): ";
//         cin >> choice;
//         switch (choice) {
//             case 1:
//                 cout << "Processing withdrawal..." << endl;
//             break;
//             case 2:
//                 cout << "Processing deposit..." << endl;
//             break;
//             case 3:
//                 cout << "Checking balance..." << endl;
//             break;
//             case 4:
//                 cout << "Goodbye!" << endl;
//             break;
//             default:
//                 cout << "Invalid option. Please select between 1 and 4." << endl;
//         }
//     } while (choice != 4);
//     return 0;
// }
// int main() { //problem 11
//     int choice;
//     double num1, num2;
//     do {
//         cout << "\n===== CALCULATOR MENU =====" << endl;
//         cout << "1: Add" << endl;
//         cout << "2: Subtract" << endl;
//         cout << "3: Multiply" << endl;
//         cout << "4: Exit" << endl;
//         cout << "Select an option (1-4): ";
//         cin >> choice;
//         if (choice >= 1 && choice <= 3) {
//             cout << "Enter the first number: ";
//             cin >> num1;
//             cout << "Enter the second number: ";
//             cin >> num2;
//         }
//         switch (choice) {
//             case 1:
//                 cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
//             break;
//             case 2:
//                 cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
//             break;
//             case 3:
//                 cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
//             break;
//             case 4:
//                 cout << "Goodbye!" << endl;
//             break;
//             default:
//                 cout << "Invalid option. Please select between 1 and 4." << endl;
//         }
//     } while (choice != 4);
//     return 0;
// }
// int main() { //problem 12
//     string correctPassword = "1234";
//     string userPassword;
//     int attempts = 0, maxAttempts = 3;
//     while (attempts < maxAttempts) {
//         cout << "Enter the password: ";
//         cin >> userPassword;
//         attempts++;
//         if (userPassword == correctPassword) {
//             cout << "Access granted. Welcome!" << endl;
//             break;
//         } else {
//             cout << "Incorrect password. ";
//             if (attempts < maxAttempts) {
//                 cout << "Try again (" << maxAttempts - attempts << " attempt(s) left)." << endl;
//             }
//         }
//     }
//     if (userPassword != correctPassword) {
//         cout << "Access denied. Too many failed attempts." << endl;
//     }
//     return 0;
// }
// int main() {
//     int secretNumber=5,guess;
//     do {
//         cout << "Guess the number (1-10): ";
//         cin >> guess;
//         if (guess < secretNumber) {
//             cout << "Too low" << endl;
//         } else if (guess > secretNumber) {
//             cout << "Too high" << endl;
//         } else {
//             cout << "Correct! " << endl;
//         }
//     } while (guess != secretNumber);
//     return 0;
// }



