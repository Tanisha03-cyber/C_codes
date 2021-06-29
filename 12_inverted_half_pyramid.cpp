//inverted half pyramid
#include<iostream>
using namespace std;
int main()
{
	int row,col;
	cout<<"Enter no of rows and columns";
	cin>>row>>col;
	for(int i=row;i>=1;i--)
	{
		for(int j=i;j>=1;j--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
