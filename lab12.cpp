#include <iostream>
using namespace std;
//problem 1
// int main() {
//     int num = 42;
//     int *ptr = &num;
//     cout << "Value of integer: " << num << endl;
//     cout << "Memory address of integer: " << ptr << endl;
//     cout << "Value at the memory address: " << *ptr << endl;
//     return 0;
// }
//problem 2
// int main() {
//     int num;
//     cin >> num;
//     int *ptr=&num;
//     cout <<"Before "<< *ptr<<endl;
//     *ptr=10;
//     cout <<"After "<< num<<endl;
//     return 0;
// }
//problem 3
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int a, b;
//     cin >> a >> b;
//     cout << a << " " << b << endl;
//     swap(&a, &b);
//     cout << a << " " << b << endl;
//     return 0;
// }
//problem 4
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int* ptr = arr;
//     for (int i = 0; i < 5; ++i) {
//         cout << *ptr << " ";
//         ++ptr;
//     }
//     cout << endl;
//     return 0;
// }
//problem 5
// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int* arr = new int[n];
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; ++i) {
//         cin >> *(arr + i);
//     }
//     int* start = arr;
//     int* end = arr + (n - 1);
//     int* middle = start + (end - start) / 2;
//     cout << "Middle element: " << *middle << endl;
//     return 0;
// }
//problem 6
// void square(int* ptr){
//     *ptr = (*ptr) * (*ptr);
// }
// int main() {
//     int num;
//     cout << "Enter an integer: ";
//     cin >> num;
//     cout << "Original value: " << num << endl;
//     square(&num);
//     cout << "After squaring: " << num << endl;
//     return 0;
// }
// problem 7
// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int* ptr = arr;
//     cout << "Array elements: ";
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "Pointer points to: " << *ptr << " (first element of array)" << endl;
//     cout << "Size of array (sizeof(arr)): " << sizeof(arr) << " bytes" << endl;
//     cout << "Size of pointer (sizeof(ptr)): " << sizeof(ptr) << " bytes" << endl;
//     return 0;
// }
//problem 8
// int main() {
//     int num = 42;
//     void *ptr = &num;
//     cout << "The value of num is: " << *(static_cast<int*>(ptr)) << endl;
//     return 0;
// }
//problem 9
// int findMax(int *arr, int size) {
//     int *ptr = arr;
//     int max = *ptr;
//     for (int i = 1; i < size; ++i) {
//         ++ptr;
//         if (*ptr > max) {
//             max = *ptr;
//         }
//     }
//     return max;
// }
// int main() {
//     int arr[] = {122, 3, 56, 7, 23, 9, 19, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int maxVal = findMax(arr, size);
//     cout << "The maximum value in the array is: " << maxVal << endl;
//     return 0;
// }



