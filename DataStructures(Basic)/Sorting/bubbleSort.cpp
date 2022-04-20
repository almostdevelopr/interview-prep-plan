#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void bubbleSort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}

int main()
{
	int arr[]={20,12,32,31,9,78};
	int n=sizeof(arr)/sizeof(arr[0]);

	cout<<"Before sorting : "<<endl;
	display(arr,n);

	bubbleSort(arr,n);
	cout<<endl;
	cout<<"After sorting : "<<endl;
	display(arr,n);
	cout<<endl;

	return 0;
}