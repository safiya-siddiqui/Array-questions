#include<iostream>
using namespace std;
int main(){
int count=0;
int n=5;
for(int i=n; i>0; i/=2){
 for(int j=1; j<n; j++){ 
     cout<<j ;  
}
count++;
}
return 0;
}