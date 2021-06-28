#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a>b && a>c && a>d)
	cout<<a<<" is largest";
	else if(b>a && b>c && b>d)
	cout<<b<<" is largest";
	else if(c>a && a>b && a>d)
    cout<<c<<" is largest";
	else
	cout<<d<<" is largest";
	return 0;
}
