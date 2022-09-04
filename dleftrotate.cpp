#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n";
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++)
        cin>>arr[i];
      
     
       int temp[2];
         for(int i=0; i<2; i++)
       temp[i]=arr[i];

       for(int i=2; i<n; i++) 
       arr[i-2]=arr[i];
       
        for(int i=0; i<2; i++) 
        arr[n-2+i]=temp[i];



      
      for(int i=0; i<n; i++)
    cout<<arr[i];
    return 0;
}