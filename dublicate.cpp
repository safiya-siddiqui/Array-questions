#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[]={10,20,20,30,30};
    
    
    for(int i=0; i<n; i++){
       
    for(int j=i+1; j<n; j++) {
        if(arr[i]==arr[j]){
             for(int k=j; k<n; k++){
                 arr[k]=arr[k+1];
             }
        }
        n--;
        j++;
    }
    }
     for(int i=0; i<=n; i++)
    cout<<arr[i]<<endl;
    return 0;
}