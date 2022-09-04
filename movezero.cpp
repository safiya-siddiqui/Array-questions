#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n;
    for(int i=0; i<n; i++){
cin>>arr[i];
}
for(int i=0; i<n-1; i++){
for(int j=i+1; j<n; j++){
if(arr[j]<arr[i]){
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
int Temp[3]
for(int i=0; i<3; i++){
Temp[i]=arr[i];
}
for(int i=3; i<n; i++){
arr[i-3]=arr[i];
}
for(int i=0; i<3; i++){
arr[n-3+i]=Temp[i];
}

}
}
}


for(int i=0; i<n; i++)
cout<<arr[i]<<" "<<endl;
return 0;
}