#include<iostream>
using namespace std;
int main(){
    int n=5;
    
    int large=0;
    int secondlarge=0;
    int arr[]={10, 56, 89 , 45 , 53};
    for(int i=0; i<n; i++)
    if(arr[i]> large){
    secondlarge=large;
    large=arr[i];
}
    else {
       if (arr[i]>secondlarge)
    secondlarge=arr[i];
    }
   cout<<secondlarge<<" "<<endl;
   
   
    return 0;
}