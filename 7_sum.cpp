//sum of natural nos till n
#include<iostream>
using namespace std;
int main()
{
	int i,n,s=0;
	cout<<"enter the number till you want to add";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	cout<<"sum of natural no. till "<<n<<" is "<<s;
	return 0;
}
