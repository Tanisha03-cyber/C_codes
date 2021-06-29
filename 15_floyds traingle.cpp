//floyd's triangle
#include<iostream>
using namespace std;
int main()
{
	int row,col,i,j,c=1;
	cout<<"enter number of rows and columns";
	cin>>row>>col;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<c<<" ";
			c++;
		}
		cout<<"\n";
	}
	return 0;
}
