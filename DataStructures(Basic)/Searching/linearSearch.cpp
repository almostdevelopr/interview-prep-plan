#include <iostream>
using namespace std;
int linearSearch(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int res=linearSearch(arr,n,5);
	cout<<"Element present at "<<res<<" index"<<endl;
	return 0;
}