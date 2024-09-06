// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
//  Write a program that prints all prime numbers between 2 and 50 using a for loop and a continue statement to skip non-prime numbers.

for (int num = 2; num <= 50; num++){
    bool isprime = true;
    // check prime is divisible by 2 to squa(n)
    
     for (int i = 2; i* i <= num; i++){
     if (num% i == 0){
         isprime = false;
         break;// prime is not
         }
     }
   if (!isprime){
       continue;
         }
  cout <<  num << endl;
} 
    

    return 0;
}
