//half pyramid using numbers
#include<iostream>
using namespace std;
int main()
{
	int row,col,i,j;
	cout<<"enter number of row and columns";
	cin>>row>>col;
	for(int i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i;
		}
		cout<<"\n";
	}
	return 0;
}
