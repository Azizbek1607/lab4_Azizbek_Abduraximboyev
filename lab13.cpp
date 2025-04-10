#include <iostream>
using namespace std;
//ptoblem 1
// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int* ptr = arr;
//     for (int i = 0; i < 5; i++) {
//         cout << *(ptr + i)<<" ";
//     }
//     cout << endl;
//     return 0;
// }
//problem 2
// int main() {
//     int arr[6] = {2, 4, 6, 8, 10, 12};
//     int* ptr = arr;
//     for (int i = 0; i < 6; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     for (int i = 0; i < 6; i++) {
//         *(ptr + i) = *(ptr + i) * 3;
//     }
//     for (int i = 0; i < 6; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
//problem 3
// int main() {
//     int arr[4] = {5, 10, 15, 20};
//     int* ptr = arr;
//     cout << "arr[2] = " << ptr[2] << endl;
//     cout << "(arr + 2) = " << *(ptr + 2) << endl;
//     return 0;
// }
//problem 4
// int main() {
//     int arr[5];
//     cout << "Enter 5 integers:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << "Element " << i + 1 << ": ";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     int* ptr = arr + 4;
//     for (int i = 0; i < 5; i++) {
//         cout << *ptr<<" ";
//         ptr--;
//     }
//     return 0;
// }
//problem 5
// int main() {
//     int arr[3] = {1, 2, 3};
//     int* ptr = arr;
//     cout << "Original *ptr: " << *ptr << endl;
//     ptr = ptr + 1;
//     cout << "After ptr = ptr + 1, *ptr: " << *ptr << endl;
//     return 0;
// }
// //problem 6
// int main() {
//     int arr[4] = {10, 20, 30, 40};
//     int* ptr = arr;
//     for (int i = 0; i < 4; i++) {
//         cout << "Value: " << *(ptr + i) << " Address: " << (ptr + i) << endl;
//     }
//     return 0;
// }
//problem 7
// int main() {
//     int arr[7];
//     cout << "Enter 7 integers:" << endl;
//     for (int i = 0; i < 7; i++) {
//         cout << "Element " << i + 1 << ": ";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < 7; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     int* ptr = arr;
//     for (int i = 0; i < 7; i++) {
//         if (*(ptr + i) % 2 == 0) {
//             cout << *(ptr + i) << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }
//problem 8
// int main() {
//     int arr[2][3];
//     cout << "Enter the elements of the 2x3 matrix:" << endl;
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << "Element at position (" << i + 1 << "," << j + 1 << "): ";
//             cin >> arr[i][j];
//         }
//     }
//     int* ptr = &arr[0][0];
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << *(ptr + (i * 3) + j) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//problem 9
// int main() {
//     int a, b, c;
//     cout << "Enter three integers:" << endl;
//     cout << "a: ";
//     cin >> a;
//     cout << "b: ";
//     cin >> b;
//     cout << "c: ";
//     cin >> c;
//     int* ptrs[3] = {&a, &b, &c};
//     for (int i = 0; i < 3; i++) {
//         cout << *ptrs[i]<<" ";
//     }
//     cout << endl;
//     return 0;
// }
//problem 10
// int main() {
//     int arr[5];
//     for (int i = 0; i < 5; i++) {
//         cout << "Element " << i + 1 << ": ";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     int* ptr = arr;
//     for (int i = 0; i < 5 - 1; i++) {
//         for (int j = 0; j < 5 - 1 - i; j++) {
//             if (*(ptr + j) > *(ptr + j + 1)) {
//                 int temp = *(ptr + j);
//                 *(ptr + j) = *(ptr + j + 1);
//                 *(ptr + j + 1) = temp;
//             }
//         }
//     }
//     cout << "Sorted array: ";
//     for (int i = 0; i < 5; i++) {
//         cout << *(ptr + i)<<" ";
//     }
//     cout << endl;
//     return 0;
// }
//problem 11
// int main() {
//     const char* suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
//     cout << "Suits in the card deck: ";
//     for (int i = 0; i < 4; i++) {
//         cout << suit[i]<<" ";
//     }
//     cout << endl;
//     return 0;
// }
//problem 12
// int main() {
//     const char* days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
//     cout << "Second character of each day:" << endl;
//     for (int i = 0; i < 7; i++) {
//         cout << "Day " << (i + 1) << " (" << days[i] << "): " << *(days[i] + 1) << endl;
//     }
//     return 0;
// }
