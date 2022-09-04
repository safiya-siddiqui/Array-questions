#include<iostream>
using namespace std;
int main(){
    int n=5;
int large= arr[0];
    int secondlarge=0;
    int thirdlarge=0;
    int arr[]={10, 56, 89 , 45 , 53};
    for(int i=0; i<n; i++)
    if(arr[i]> large){
    secondlarge=large;
    large=arr[i];
    thirdlarge=secondlarge;
}
    else {
       if (arr[i]>secondlarge)
    secondlarge=arr[i];
    thirdlarge=secondlarge;
    }
    else {
        (arr[i]>thirdlarge)
    thirdlarge=arr[i];
    
    }
   cout<<thirdlarge<<" "<<endl;
   
   
    return 0;
}