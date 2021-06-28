#include<iostream>
using namespace std;
int main()
{
	int n,div=2,i;
	cout<<"Enter a number for checking ";
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		div++;
	}
	if(div==2)
	cout<<"prime no";
	else
	cout<<"not a prime no";
	return 0;
}
