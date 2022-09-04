#include <iostream>

using namespace std;
int maxconsecutivearray(int arr[],int n){
    int res=arr[0];
   int maxending=arr[0];
    for(int i=1;i<n;i++)
    {
         
       
      
     
  maxending=max(maxending+arr[i] ,arr[i]);
             res=max(res,maxending);
       }
           
    
    return res;
}

int main()
{
    int n;
    cout<<"enter the n";
    cin>>n;
    int arr[n];
    cout<<"enter the element of an array";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<maxconsecutivearray(arr,n);
    
   
    return 0;
}
