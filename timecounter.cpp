// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
//Create a countdown timer using a while loop. The timer should start from a user-defined number and count down to zero, printing each value. When it reaches zero, print "Time's up!"
  int n;
cin >> n;

for (int i = n; i>= 0; i--){
    if (i == 0){
      cout << "time is up "  << endl;
      
    }
  cout << i << endl;  
}
    
    

    return 0;
}
