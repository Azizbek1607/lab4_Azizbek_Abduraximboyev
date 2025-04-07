#include <iostream>
using namespace std;

// void welcomemsg() {
//     cout<<"Welcome to the C++ programming world!"<<endl;
// }
// int main() {
//     welcomemsg();
//     return 0;
// }
// void greetUser() {
//     cout<<"enter name"<<endl;
//     string name;
//     cin>>name;
//     cout << "Hello," << name << endl;
// }
// int main() {
//     greetUser();
//     return 0;
// }
// int maxNum(int a, int b) {
//     if (a > b) {
//         return a;
//     }
//     else {
//         return b;
//     }
// }
// int main() {
//     int a, b,result=0;
//     cin>>a;
//     cin>>b;
//     result = maxNum(a, b);
//     cout<<result;
//     return 0;
// }
// int factorial(int n,int result=1) {
//     if (n>0) {
//         for (int i = 1; i <= n; i++) {
//             result *= i;
//         }
//         return result;
//     }
//     else if (n==0) {
//         result = 1;
//     }
//     else {
//         cout<<"Invalid Input"<<endl;
//         return 0;
//     }
// }
// int main() {
//     int n,fact=1;
//     cin>>n;
//     fact *= factorial(n);
//     cout<<fact<<endl;
//     return 0;
// }

int printRec(int w, int h) {
   for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
         cout << '*';
      }
      cout << endl;
   }
   return 0;
}
int main() {
   int w, h;
   cin >> w >> h;
   printRec(w, h);
   return 0;
}

