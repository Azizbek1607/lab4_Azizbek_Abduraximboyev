#include <iostream>
using namespace std;
//problem 1
// int main() {
//     int n,sum=0;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++) {
//         cin>>a[i];
//         sum+=a[i];
//     }
//     cout<<sum;
//     return 0;
// }
//problem 2
// int main() {
//     int n;float sum=0;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++) {
//         cin>>a[i];
//         sum+=a[i];
//     }
//     double avg=sum/n;
//     cout<<avg<<endl;
//     return 0;
// }
//problem 3
// int min(int arr[],int size) {
//     int min = arr[0];
//     for(int i=0;i<size;i++) {
//         if(arr[i]<min) {
//             min = arr[i];
//         }
//     }
//     return min;
// }
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     cout<<min(arr,n);
// }
//problem 4
// int indexOfLargestElement(double array[], int size) {
//     if (size<=0) return -1;
//     int largest = array[0];
//     int largestIndex = 0;
//     for (int i=1; i<size; i++) {
//         if (array[i]>=largest) {
//             largest = array[i];
//             largestIndex = i;
//         }
//     }
//     return largestIndex;
// }
// int main() {
//     const int size = 15;
//     double numbers[size];
//     cout << "Enter 15 numbers: ";
//     for (int i = 0; i < size; i++) {
//         cin >> numbers[i];
//     }
//     int index = indexOfLargestElement(numbers, size);
//     if (index == -1) {
//         cout << "Array size is invalid (less than or equal to 0)." << endl;
//     } else {
//         cout << "The index of the largest element is: " << index << endl;
//         cout << "The largest element is: " << numbers[index] << endl;
//     }
//     return 0;
// }
//problem 5
// bool strictlyEqual(const int list1[], const int list2[],int size) {
//     for(int i = 0; i < size; i++) {
//         if(list1[i] != list2[i]) {
//             return false;
//         }
//         else if(list1[i] == list2[i]) {
//             return true;
//         }
//     }
// }
// int main() {
//     int n;
//     cout<<"Enter the number of elements in the list: ";
//     cin>>n;
//     int list1[n];
//     int list2[n];
//     cout<<"Enter elements of list 1:"<<endl;
//     for(int i = 0; i < n; i++) {
//         cin>>list1[i];
//     }
//     cout<<"Enter elements of list 2:"<<endl;
//     for(int i = 0; i < n; i++) {
//         cin>>list2[i];
//     }
//     if (strictlyEqual(list1, list2, n)==1) {
//         cout<<"Lists are identical"<<endl;
//     }
//     else {
//         cout<<"Lists are not identical"<<endl;
//     }
//     return 0;
// }
//problem 6
// int main() {
//     int freq[26] = {0};
//     char ch;
//     cout << "Enter characters (enter '0' to terminate): ";
//     while (true) {
//         cin >> ch;
//         if (ch == '0') {
//             break;
//         }
//         if (islower(ch)) {
//             int index = ch - 'a';
//             freq[index]++;
//         }
//     }
//     cout << "Frequencies of lowercase letters:" << endl;
//     bool hasOutput = false;
//     for (int i = 0; i < 26; i++) {
//         if (freq[i] > 0) {
//             char letter = 'a' + i;
//             cout << letter << ": " << freq[i] << endl;
//             hasOutput = true;
//         }
//     }
//     if (!hasOutput) {
//         cout << "No lowercase letters were entered." << endl;
//     }
//     return 0;
// }
//problem 7
// void bubbleSort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
//
// int main() {
//     int size;
//     cin >> size;
//     if (size <= 0) {
//         cout << "Invalid size! Please enter a positive number." << endl;
//         return 1;
//     }
//     int arr[size];
//     cout << "Enter " << size << " integers:" << endl;
//     for (int i = 0; i < size; i++) {
//         cout << "Element " << i + 1 << ": ";
//         cin >> arr[i];
//     }
//     bubbleSort(arr, size);
//     cout << "Sorted array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
//problem 8
// #include <random>
// int main() {
//     const int NUM_ROLLS = 10000;
//     const int FACES = 6;
//     int frequency[FACES] = {0};
//     random_device rd;
//     mt19937 gen(rd());
//     uniform_int_distribution<int> dist(1, 6);
//     for (int i = 0; i < NUM_ROLLS; i++) {
//         int roll = dist(gen);
//         frequency[roll - 1]++;
//     }
//     cout << "Results after rolling a die " << NUM_ROLLS << " times:" << endl;
//     for (int i = 0; i < FACES; i++) {
//         cout << "Value " << (i + 1) << ": " << frequency[i] << " times" << endl;
//     }
//     int total = 0;
//     for (int i = 0; i < FACES; i++) {
//         total += frequency[i];
//     }
//     cout << "Total rolls: " << total << endl;
//     return 0;
// }
//problem 9
// void reverseArray(int arr[], int start, int end) {
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
// int main() {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;
//     if (size <= 0) {
//         cout << "Invalid size! Please enter a positive number." << endl;
//         return 1;
//     }
//     int arr[size];
//     cout << "Enter " << size << " integers:" << endl;
//     for (int i = 0; i < size; i++) {
//         cout << "Element " << i + 1 << ": ";
//         cin >> arr[i];
//     }
//     reverseArray(arr, 0, size - 1);
//     cout << "Reversed array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
//problem 10
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid size! Please enter a positive number." << endl;
        return 1;
    }
    int a[n];
    cout << "Enter " << n << " positive integers:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> a[i];
        if (a[i] <= 0) {
            cout << "Please enter a positive integer!" << endl;
            return 1;
        }
    }
    bool isSorted = true;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            isSorted = false;
            break;
        }
    }
    if (isSorted) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}