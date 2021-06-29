//inverted pyramid after 180 degree rotation
#include<iostream>
using namespace std;
int main()
{
	int row,col;
	cout<<"enter number of rows and columns";
	cin>>row>>col;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		{
			if(j<=(row-i))
			{
				cout<<" ";
			}
			else
			{
				cout<<"*";
			}
		}
		cout<<"\n";
	}
	return 0;
}
