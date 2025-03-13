#include <iostream>
#include <cmath>
using namespace std;
// int multiply(int a, int b) {
//     //problem 1
//     if (b == 0)
//         return 0;
//     return a + multiply(a, b - 1);
// }
// int main() {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     cout << "The product of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << endl;
//     return 0;
// }
//problem 2
// int factorial(int n) {
//     if (n == 0 or n == 1) return 1;
//     return n * factorial(n - 1);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << factorial(n);
// }
//problem 3
// int fibonacci(int n) {
//     if (n == 1) {
//         return 1;
//     }
//     if (n == 0) {
//         return 0;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << fibonacci(n) << endl;
//     return 0;
// }
//problem 4
// int nsum(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     return n + nsum(n - 1);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout<<nsum(n);
//     return 0;
// }
//problem 5
// int desc(int n) {
//     if (n == 1) return 1;
//     cout << n << " ";
//     return desc(n - 1);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << desc(n) << endl;
//     return 0;
// }
//problem 6
// int remainder(int num) {
//     if (num < 10) {
//         return num;
//     }
//     return remainder(num % 10);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << remainder(n) << endl;
//     return 0;
// }
//problem 7
// int sum(int n) {
//     if (n/10==0 && n%10==0) {
//         return 0;
//     }
//     return n%10 + sum(n/10);
// }
// int main() {
//     int n,s=0;
//     cin>>n;
//     cout<<sum(n);
//     return 0;
// }
//problem 8
// int power(int base, int exp) {
//     int result = 1;
//     if (exp == 0) {
//         return result;
//     }
//     return base * power(base, exp - 1);
// }
// int main() {
//     int a,b;
//     cin>>a;
//     cin>>b;
//     cout<<power(a,b);
//     return 0;
// }
// problem 9
//  void reverse(int n) {
//      if (n/10 == 0 && n%10==0) return ;
//      cout<<n%10;
//      n=n/10;
//      return reverse(n);
//  }
//  int main() {
//      int n;
//      cin>>n;
//      reverse(n);
//      return 0;
//  }
//problem 10
// bool isPalindrome(int n, int original) {
//     static int reversed = 0;
//     if (n == 0) {
//         bool result = (reversed == original);
//         reversed = 0;
//         return result;
//     }
//     reversed = reversed * 10 + (n % 10);
//     return isPalindrome(n / 10, original);
// }
// int main() {
//     int n;
//     cin >> n;
//     if (n < 0) {
//         cout << n << " is not a palindrome" << endl;
//         return 0;
//     }
//     if (isPalindrome(n, n)) {
//         cout << n << " is a palindrome" << endl;
//     } else {
//         cout << n << " is not a palindrome" << endl;
//     }
//     return 0;
// }
//problem 11
bool isPrime(int n, int divisor = 2) {
    if (n < 2) return false;
    if (divisor > sqrt(n)) return true;
    if (n % divisor == 0) return false;
    return isPrime(n, divisor + 1);
}
int main() {
    int n;
    cin >> n;
    if (isPrime(n)) {
        cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is not a prime number" << endl;
    }
    return 0;
}