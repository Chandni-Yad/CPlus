// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
//   Write a C++ program to find the sum of all elements in an array.
// Input: An integer array of size n.
// Output: The sum of all elements in the array
int n;
cin >> n;
int arr[n];
for (int i = 0; i< n; i++){
  cin >> arr[i] ;  
    }
int sum = 0;
for (int i = 0; i < n; i++){
    sum = sum + arr[i];
}
 cout << "sum of all elements in array is " << sum << endl;
    return 0;
}
