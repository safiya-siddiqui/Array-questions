#include<iostream>
using namespace std;

    // initialised maximum element
   
    //traverse array elements
    //from second and compare
    //every elements with current max
   
int main(){
  int n=5;
    int arr[]={5,15,56,230,450};
     int max=arr[0];
     int min=arr[0];
     for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }else if(arr[i]<min){
          min=arr[i];
        }  
     }
    
    cout<<max << " " <<endl;
      cout<< min<< " " <<endl;
    
    return 0;
}