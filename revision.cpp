#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[]={5, 8, 4, 9, 6};
    int large=0;
    int secondlarge=0;
    for(int i=0; i<=n; i++){
        if(arr[i]>large){
large=arr[i];
        secondlarge=large;
        }
       else if ( arr[i]>secondlarge) 
       secondlarge =arr[i];
    }
cout<<secondlarge;
return 0;
    }