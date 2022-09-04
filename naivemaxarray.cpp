#include<iostream>
using namespace std;
int maxsubarraysum(int arr[],int n){
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int curr=0;
        for(int j=i;j<n;j++){
            curr=curr+arr[j];
            res=max(res,curr);
        }
    }
    return res;
}
int main(){
    int n;
    cout<<"enter the n";
    cin>>n;
    int arr[n];
    cout<<"enter the element of an array";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<maxsubarraysum(arr,n);
    return 0;
}