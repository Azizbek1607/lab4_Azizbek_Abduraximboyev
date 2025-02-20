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
//
//     return 0;
// }
int main() { //problem 4
    int n,c=0;
    cin>>n;
    if (n>0) {
      while (n%10!=0) {
        n=n/10;
        c++;

      }
      cout<<c<<endl;
    }
    else {
      cout<<"Enter a positive number\n";
}
