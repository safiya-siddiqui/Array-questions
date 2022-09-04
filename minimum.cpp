#include<iostream>
using namespace std;
int smallest(int arr[] ,int n){
    int min=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<min)
        min=arr[i];

    }
    return min;
}
int main(){
   
   int arr[]={10 ,20 ,30, 40 ,50};
   int n=sizeof (arr)/sizeof (arr[0]);
   
   
  
    
   
   
    cout<<smallest(arr,n)<<" "<<endl;
    return 0;
}