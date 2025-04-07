#include <iostream>
#include <string>
using namespace std;
//problem 1
// int main() {
//     int N, M;
//     cout << "Enter the number of rows (N): ";
//     cin >> N;
//     cout << "Enter the number of columns (M): ";
//     cin >> M;
//     int matrix[N][M];
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cout << "Element at position (" << i + 1 << "," << j + 1 << "): ";
//             cin >> matrix[i][j];
//         }
//     }
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     int sum = 0;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             sum += matrix[i][j];
//         }
//     }
//     cout << "The sum of all elements in the matrix is: " << sum << endl;
//     return 0;
// }
//problem 1
// void inputMatrix(int matrix[][100],int N,int M) {
//     for(int i=0;i<N;i++) {
//         for(int j=0;j<M;j++) {
//             cin>>matrix[i][j];
//         }
//     }
// }
// int main() {
//     int N, M;
//     cin>>N;
//     cin>>M;
//     int matrix[100][100];
//     inputMatrix(matrix,N,M);
//     for(int i=0;i<N;i++) {
//         for(int j=0;j<M;j++) {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }
//problem 2
// int main() {
//     int N, M;
//     cin >> N;
//     cin >> M;
//     int matrix[N][M];
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cout << "Element at position (" << i + 1 << "," << j + 1 << "): ";
//             cin >> matrix[i][j];
//         }
//     }
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < N; i++) {
//         int maxInRow = matrix[i][0];
//         for (int j = 1; j < M; j++) {
//             if (matrix[i][j] > maxInRow) {
//                 maxInRow = matrix[i][j];
//             }
//         }
//         cout << "Max num in Row " << i + 1 << ": " << maxInRow << endl;
//     }
//     return 0;
// }
//problem 3
// int main() {
//     int n,m,sum=0;
//     cin>>n;
//     cin>>m;
//     int arr[n][m];
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<m; j++) {
//             cin>>arr[i][j];
//         }
//     }
//     for (int j = 0; j < m; j++) {
//         int columnSum = 0;
//         for (int i = 0; i < n; i++) {
//             columnSum += arr[i][j];
//         }
//         cout << "Column " << j + 1 << ": " << columnSum << endl;
//     }
//     return 0;
// }
//problem 4
// int main() {
//     int N;
//     cin >> N;
//     int matrix[N][N];
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             cin >> matrix[i][j];
//         }
//     }
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     int diagonalSum = 0;
//     for (int i = 0; i < N; i++) {
//         diagonalSum += matrix[i][i];
//     }
//     cout << diagonalSum << endl;
//     return 0;
// }
// problem 5
// int main() {
//     int M, N;
//     cin >> M >> N;
//     int A[M][N];
//     int B[N][M];
//     for (int i = 0; i < M; ++i) {
//         for (int j = 0; j < N; ++j) {
//             cin >> A[i][j];
//         }
//     }
//     for (int i = 0; i < M; ++i) {
//         for (int j = 0; j < N; ++j) {
//             B[j][i] = A[i][j];
//         }
//     }
//     for (int i = 0; i < N; ++i) {
//         for (int j = 0; j < M; ++j) {
//             cout << B[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// problem 6
// int main() {
//     int r1, c1;
//     cin >> r1 >> c1;
//     int A[r1][c1];
//     for (int i = 0; i < r1; ++i) {
//         for (int j = 0; j < c1; ++j) {
//             cin >> A[i][j];
//         }
//     }
//     int r2, c2;
//     cin >> r2 >> c2;
//     int B[r2][c2];
//     for (int i = 0; i < r2; ++i) {
//         for (int j = 0; j < c2; ++j) {
//             cin >> B[i][j];
//         }
//     }
//     if (c1 != r2) {
//         cout << "Matrix multiplication not possible!" << endl;
//         return 0;
//     }
//     int C[r1][c2];
//     for (int i = 0; i < r1; ++i) {
//         for (int j = 0; j < c2; ++j) {
//             C[i][j] = 0;
//         }
//     }
//     for (int i = 0; i < r1; ++i) {
//         for (int j = 0; j < c2; ++j) {
//             for (int k = 0; k < c1; ++k) {
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }
//     for (int i = 0; i < r1; ++i) {
//         for (int j = 0; j < c2; ++j) {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// problem 7
// int main() {
//     int N;
//     cin >> N;
//     int matrix[N][N];
//     for (int i = 0; i < N; ++i) {
//         for (int j = 0; j < N; ++j) {
//             cin >> matrix[i][j];
//         }
//     }
//     for (int i = 0; i < N; ++i) {
//         for (int j = i + 1; j < N; ++j) {
//             swap(matrix[i][j], matrix[j][i]);
//         }
//     }
//     for (int i = 0; i < N; ++i) {
//         int left = 0, right = N - 1;
//         while (left < right) {
//             swap(matrix[i][left], matrix[i][right]);
//             ++left;
//             --right;
//         }
//     }
//     for (int i = 0; i < N; ++i) {
//         for (int j = 0; j < N; ++j) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//strings problem 1
// int main() {
//     string a;
//     int v=0, c=0;
//     cin >> a;
//     int len = a.length();
//     for (int i = 0; i < len; i++) {
//         if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
//             v++;
//         }
//         else {
//             c++;
//         }
//     }
//     cout << v<<" "<<c<<endl;
//     return 0;
// }
//problem 2
// int main() {
//     string n;
//     cin >> n;
//     int len = n.length();
//     for (int i = len-1; i >= 0; i--) {
//         cout << n[i];
//     }
//     return 0;
// }
//problem 3
// int main() {
//     string polindrome;
//     int end,start;
//     cin>>polindrome;
//     end = polindrome.length();
//     start=0;
//     bool flag=false;
//     while (start<end) {
//         if (polindrome[start]==polindrome[end-1]) {
//             start++;
//             end--;
//             flag=true;
//         }
//         else {
//             start++;
//             end--;
//             flag=false;
//         }
//     }
//     if (flag==true) {
//         cout<<"YES";
//     }
//     else {
//         cout<<"NO";
//     }
// }
// problem4
// int main() {
//     string s;
//     cin >> s;
//     int freq[256] = {0};
//     for (char ch : s) {
//         freq[(int)ch]++;
//     }
//     char mostFrequent;
//     int maxFreq = 0;
//     for (int i = 0; i < 256; ++i) {
//         if (freq[i] > maxFreq) {
//             maxFreq = freq[i];
//             mostFrequent = (char)i;
//         }
//     }
//     cout << mostFrequent << endl;
//     return 0;
// }
//problem5
// int main() {
//     string polindrome;
//     int end,start;
//     cin>>polindrome;
//     end = polindrome.length();
//     start=0;
//     bool flag=false;
//     while (start<end) {
//         if (polindrome[start]==polindrome[end-1]) {
//             start++;
//             end--;
//             flag=true;
//         }
//         else {
//             start++;
//             end--;
//             flag=false;
//         }
//     }
//     if (flag==true) {
//         cout<<"YES";
//     }
//     else {
//         cout<<"NO";
//     }
// }
// //problem 6
// int main() {
//  string sentence;
//  getline(cin, sentence);
//  string word = "", longestWord = "";
//  int maxLength = 0;
//  for (int i = 0; i <= sentence.length(); ++i) {
//   if (i < sentence.length() && sentence[i] != ' ') {
//    word += sentence[i];
//   } else {
//    if (word.length() > maxLength) {
//     maxLength = word.length();
//     longestWord = word;
//    }
//    word = "";
//   }
//  }
//  cout << longestWord << endl;
//  return 0;
// }
// //problem 7
// int main() {
//  string s1, s2;
//  cin >> s1 >> s2;
//  if (s1.length() != s2.length()) {
//   cout << "No" << endl;
//   return 0;
//  }
//  sort(s1.begin(), s1.end());
//  sort(s2.begin(), s2.end());

//  if (s1 == s2) {
//   cout << "Yes" << endl;
//  } else {
//   cout << "No" << endl;
//  }
//
//  return 0;
// }
    

