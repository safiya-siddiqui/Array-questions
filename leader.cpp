#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j;
    int arr[n];
  
    for(int i=0; i<n; i++)
    cin>>arr[i];
    	for(int i = 0; i < n; i++)
	{
		bool flag = false;

		for(int j = i + 1; j < n; j++)
		{
			if(arr[i] <= arr[j])
			{
				flag = true;
				break;
			}
		}

		if(flag == false)
		{
			cout<<arr[i]<<" ";
		}
	}
  return 0;
}


