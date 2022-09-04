#include<iostream>
using namespace std;
void insert(int arr[], int n, int x ,int position){

int newArr[n+1];
int index=position-1;

for(int i=0;i<n+1;i++){

    if(i<index) newArr[i]=arr[i];
    else if(i==index) newArr[i]=x;
    else newArr[i]=arr[i-1];
}

for(int i=0;i<n+1;i++){
    cout<<newArr[i]<<" "<<endl;
}

}
int main(){
     
    int n=3;
    int arr[]={10,20,30};
   
    cout<<"before insertion"<<endl;

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x=5;
 int position=2;
  
 insert(arr ,n ,x,position);
 
    return 0;

}