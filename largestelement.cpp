#include<iostream>
using namespace std;
int largeno(int arr[] ,int n){
    // initialised maximum element
    int max=arr[0];
    //traverse array elements
    //from second and compare
    //every elements with current max
    for(int i=0; i<n; i++)
        if(arr[i]>max)
            max=arr[i];
        return max;
    }

int main(){
    int arr[]={10,20,56,2345};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"largest in given array is"<< " " <<  largeno(arr,n)<<endl;
    return 0;
}