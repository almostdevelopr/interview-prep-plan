#include <iostream>
using namespace std;

int ropeCutting(int n,int a,int b,int c)
{
	if(n==0)
		return 0;
	if(n<0)
		return -1;
	int res = max(ropeCutting(n-a,a,b,c),max(ropeCutting(n-b,a,b,c),ropeCutting(n-c,a,b,c)));
	if(res==-1)
		return -1;

	return res+1;
}

int main()
{
	int n=23,a=11,b=9,c=12;
	// int res=ropeCutting(n,a,b,c);
	cout<<ropeCutting(n,a,b,c)<<endl;
	return 0;
}