// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void maxelement(int arr[], int size){
   int mini = 0;
   int max = 0;
   for (int i = 0; i < size; i++){
       if (arr[i]< mini){
           mini = arr[i];
       }
     else if (arr[i]> max) {
         max = arr[i];
     } 
   }
  cout << "mininumber is"<< mini  << endl;
  cout << "maxnumber is" << max << endl;
}




int main() {
//   Write a program to find the maximum and minimum element in an array.
// Input: An integer array of size n.
// Output: The maximum and minimum values in the array.
int size = 5;
int arr[] = {-2,4,5,6,7};
  maxelement(arr, size) ;
    return 0;
}
