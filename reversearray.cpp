// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void reversearray(int arr[], int n){
    int start = 0;
    int end = n -1;
    while (start < end){
        int temp = arr[start];// for storing value in temp
        arr[start] = arr[end];// end ki value start ki value ho jayigi
        arr[end] = temp;// storing vlue end ki vlue ho jayigi
        start++;
        end--;
        
    }

  
}

int main() {
//   Write a C++ program to reverse the elements of an array.
// Input: An integer array of size n.
// Output: The reversed array.
int n;
cin >> n;
int arr[n] ;
for (int i = 0; i< n; i++){
    cin >> arr[i];
    
}
reversearray(arr, n);
cout << "reverse array is"<< endl;
for (int i = 0; i < n; i++){
    cout << arr[i]<< endl;
}
    return 0;
}
