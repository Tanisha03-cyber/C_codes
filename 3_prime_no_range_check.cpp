#include<iostream>
using namespace std;
int main()
{
	int div=2,i,j,range0,range1;
	cout<<"enter the range of numbers ";
	cin>>range0>>range1;
	for(j=range0;j<=range1;j=j+1)
	{
		for(i=2;i<j;i++)
		{
			if(j%i==0)
			div++;
			break;
		}
		if(div==2)
		cout<<j<<",";
		div=2;
	}
}
