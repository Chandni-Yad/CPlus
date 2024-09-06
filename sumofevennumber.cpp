// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
int main() {
//Write a program that uses a while loop to find the sum of all even numbers between 1 and 100. Stop the loop when the sum exceeds 1,000.
  int i = 1 ;
  int n = 100;
  int sum = 0;
  while(i<=n){
  if(i%2==0){
     sum+=i;
  } else if( sum + i>=1000){
      break ;
  }
    i++;
  }
  cout<<sum<<endl;

    return 0;
}
