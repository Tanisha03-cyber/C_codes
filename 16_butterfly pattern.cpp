//butterfly pattern, 2*n rows and 2^*n cols
#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int x=8;
	for(int i=1;i<=(n);i++)
	{
		for(j=1;j<=(2*n);j++)
		{
			if(j<=i || j>=x)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		x=x-1;
		cout<<"\n";
	}
	for(i=n+1;i<=(2*n);i++)
	{
		for(j=1;j<=(2*n);j++)
		{
			if(j>=i || j<=x)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		x=x-1;
		cout<<"\n";
	}
	return 0;
}
