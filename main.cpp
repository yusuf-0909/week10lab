#include <iostream>
using namespace std;

//problem 6
// int main() {
//     char lowercase[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
//     int frequency[26] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
//     char input;
//     while (cin >> input) {
//         for (char letter : lowercase) {
//             if (input == letter) {
//                 frequency[letter - 'a']++;
//             }
//         }
//         if (input == '0') {
//             break;
//         }
//     }
//     for (char letter : lowercase) {
//         if (frequency[letter - 'a'] != 0) {
//             cout << letter << ": " << frequency[letter - 'a'] << endl;
//         }
//     }
// }

//problem 7
// int main() {
//     int n;
//     cout << "Enter number of numbers: ";
//     cin >> n;
//     int numbers[n];
//     for (int i = 0; i < n; i++) {
//         cout << "Enter number " << i + 1 << ": ";
//         cin >> numbers[i];
//     }
//     for (int j = 0; j < n; j++) {
//         for (int i = 0; i < n; i++) {
//             if (numbers[i] > numbers[i + 1]) {
//                 int temp = numbers[i];
//                 numbers[i] = numbers[i + 1];
//                 numbers[i + 1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++) {cout << numbers[i] << " ";}
// }

//problem 8
// #include <cstdlib>
// #include <ctime>
//
// int main() {
//     srand(time(0));
//     int dieValues[6] = {1, 2, 3, 4, 5, 6};
//     int frequency[6] = {0, 0, 0, 0, 0, 0};
//     for (int i = 1; i <= 10000; i++) {
//         int dieVal = rand() % 7;
//         for (int value : dieValues) {
//             if (dieVal == value) {frequency[value-1]++;}
//         }
//     }
//     for (int i = 0; i < 6; i++) {cout << dieValues[i] << ": " << frequency[i] << " " << endl;}
// }

//problem 9
// void reverseArray(int arr[], int start, int end) {
//     int n = end;
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
//     for (int i = 0; i <= n; i++) {
//         cout << arr[i] << " ";
//     }
// }
//
// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cout << "Enter element " << i + 1 << ": ";
//         cin >> arr[i];
//     }
//     reverseArray(arr, 0, n - 1);
// }

//problem 10
// int main() {
//     int n;
//     cout << "Enter number of numbers: ";
//     cin >> n;
//     int numbers[n];
//     int checker[n];
//     for (int i = 0; i < n; i++) {
//         cout << "Enter number " << i + 1 << ": ";
//         cin >> numbers[i];
//         checker[i] = numbers[i];
//     }
//
//     for (int j = 0; j < n; j++) {
//         for (int i = 0; i < n-1; i++) {
//             if (numbers[i] > numbers[i + 1]) {
//                 int temp = numbers[i];
//                 numbers[i] = numbers[i + 1];
//                 numbers[i + 1] = temp;
//             }
//         }
//     }
//     bool isSorted = true;
//     for (int i = 0; i < n; i++) {
//         if (numbers[i] != checker[i]) {
//             isSorted = false;
//         }
//     }
//     if (isSorted) {cout << "Yes" << endl;}
//     else {cout << "No" << endl;}
// }