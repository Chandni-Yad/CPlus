class Solution {
  public:
// find missing in array
    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {
     int totalsum = n*(n+1)/2;
     int sum = 0;
     for (int i = 0;i< n-1; i++ ){
         sum = sum + arr[i];
     }
     int ans = totalsum - sum;
     return ans;
        // Your code goes here
    }
