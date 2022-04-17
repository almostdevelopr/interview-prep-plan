#include <iostream>
using namespace std;

int deleteFromArray(int arr[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
			break;
	} //i -> index of x

	if(i==n)
		return n;
	
	// start copying from the val->index
	for(int j=i;j<n-1;j++)
	{
		arr[i]=arr[i+1];
	}
	return (n-1);
}

/*Return index of largest number*/
int getLargest(int arr[],int n)
{
	int res=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[res])
			res=i;
	}
	return res;
}

/*Return index of second largest number in an array*/
int getSecondLargest(int arr[],int n)
{
	int largest=0,res=-1;

	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[largest])
		{
			res=largest;
			largest=i;
		}
		else if(arr[i]!=arr[largest])
		{
			if(res==-1||arr[i]>arr[res])
				res=i;
		}
	}
	return res;
}

bool isSorted(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		if(arr[i]<arr[i-1])
			return false;
	}
	return true;
}

void reverseArray(int arr[],int n)
{
	int low=0;
	int high=n-1;

	while(low<high)
	{
		int temp=arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		low++;
		high--;
	}
}

/*Removes duplicate elements from an array and returns size of the array
* Time complexity: O(n)
* Aux space: O(1)*/

int remDups(int arr[],int n)
{
	int res=1;
	for(int i=1;i<n;i++)
	{
		if(arr[res-1]!=arr[i])
		{
			arr[res]=arr[i];
			res++;
		}
	}
	return res;
}

int main()
{
	int arr[]={3,8,12,15,16};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"\nBefore Deletion: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<endl;
	// delete operation
	int x;
	cout<<"Enter element to be deleted: "<<endl;
	cin>>x;
	cout<<endl;
	n=deleteFromArray(arr,n,x);
	cout<<"After Deletion: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<endl;

	int idx=getLargest(arr,n);
	cout<<"Largest element in the array : "<<arr[idx]<<endl;

	bool res=isSorted(arr,n)?true:false;
	cout<<"Array sorted? - "<<res<<endl;

	int sec_idx=getSecondLargest(arr,n);
	cout<<"Second largest number : "<<arr[sec_idx]<<endl;

	cout<<endl;

	cout<<"Reversed Array: "<<endl;
	reverseArray(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<endl;

	return 0;
}