//hollow rectangle pattern
#include<iostream>
using namespace std;
int main()
{
	int row,col;
	cout<<"Enter number of rows and columns";
	cin>>row>>col;
	for(int i=1;i<=row;i++)
	{
		if(i==1 || i==row)
		{
			for(int j=1;j<=col;j++)
			{
				cout<<"*";
			}
		}
		else
		{
			for(int k=1;k<=col;k++)
			{
				if(k==1 || k==col)
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}
