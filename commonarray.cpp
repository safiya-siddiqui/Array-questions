#include<iostream>
using namespace std;

void common(int arr1[], int arr2[], int arr3[] ,int n1, int n2, int n3){
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++)
        {
            for(int k=0; k<n3; k++)
            {
                if(arr1[i]==arr2[j] && arr2[j]==arr3[k])
                {
                   cout<<arr1[i];
                }
            }
        }
    }
 
}

int main(){
   

    int arr1[]={10,15,20,30};
     int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={10,15,25,30,40,50};
     int n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[]={10,30,60,80};
     int n3=sizeof(arr3)/sizeof(arr3[0]);
    cout<<n2;
    common(arr1,arr2,arr3, n1,n2,n3);
   
    return 0;
}

