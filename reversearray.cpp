#include<iostream>
using namespace std;
int rev(int arr[], int n){
   int start=0;
    int end=n-1;
    int temp;
   while(start<end){
 temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
   } 
cout<<"reverse array";
 for(int i=0; i<n; i++){
    cout<<arr[i];
 }
  int start=0;
    int end=n-1;
    int temp;
   while(start<end){
 temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
}
int main()
{
   int n;
   cout<<"enter the size of an array";
   cin>>n;
   int arr[n];
    cout<<"enter the element of an array"<<endl;
   for(int i=0; i<n; i++)
   {
   cin>>arr[i];
   }
    
    rev(arr,n);
    
    return 0;
}