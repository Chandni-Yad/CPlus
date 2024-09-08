class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        
     int shift = d % n;
     int tem[d];
     for(int i=0 ; i<= shift ; i++){
         tem[i] =arr[i];
        
   
     }
     
    for(int i = 0 ; i <n-shift ; i++){
        arr[i] =arr[shift+i];
    //   cout<<arr[i]<<endl;
     }
     
     for(int i = 0 ; i<shift ; i++){
         arr[n-shift+i] =tem[i];
        // cout<<arr[n-shift+i]<<endl;
        }
    }
    
    
};
