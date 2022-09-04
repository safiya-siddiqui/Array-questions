#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=5;
    int d=2;
    int an=0;
    int sum=0;
    
    for(int i=1;i<=6; i++)
        an=a+((i-1)*d);
        sum=sum+an;
        cout<<sum;
    
    
    return 0;

}