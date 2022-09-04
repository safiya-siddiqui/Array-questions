#include<iostream>
using namespace std;
int freq(int arr[] ,int n){
    int freq=1;
    int i=1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            freq++;
            i++;
        }
    
    cout<<arr[i-1]<<" "<<freq<<endl;
    i++;
    freq=1;
    }
}
int main(){
int n=5;

int arr[]={ 9,10,10,11,11};

freq(arr,n);
return 0;
}
