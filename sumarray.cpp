#include<iostream>
using namespace std;
int main(){
  
    int n;
    cin>>n;
    int arr[n];
   for(int i=1; i<=n; i++)
   cin>>arr[i];
   int sum=0;
      for(int i=1; i<=n; i++)
    sum=sum+arr[i];
   
    cout<<sum;
    return 0;
}