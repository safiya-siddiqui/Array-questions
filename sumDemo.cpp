#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={2,10,11,7,14};
    int sum=0; 
    int diff;
    for(int i=0;i<n-1;i++){
if(arr[i]>arr[i+1]){
diff=arr[i]-arr[i+1];
    }
    else{
    if(arr[i+1]>arr[i])
    diff=arr[i+1]-arr[i];
        
    }
    cout<<arr[i];
    return 0;
}