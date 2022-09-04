#include<iostream>
using namespace std;
int search(int arr[] ,int n , int key){
    for(int i=1; i<=n ;i++){
        if( arr[i]==key){
            return 1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
     cout<<"enter the element of array"<<endl;
    for(int i=0; i<n ; i++)
   
    cin>>arr[i];
     
    int key;
    cout<<"enter the key element";
    cin>>key;
    cout<<search(arr,n , key);
    return 0;
}





