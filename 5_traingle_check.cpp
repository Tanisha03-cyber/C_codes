//triangle is equilateral, isosceles or scalene
#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"enter the sides of triangle";
	cin>>a>>b>>c;
	if(a==b && b==c && c==a)
	cout<<"It is an equilateral traingle"<<endl;
	else if(a==b || b==c || c==a)
	cout<<"it is an isosceles traingle"<<endl;
	else
	cout<<"it is a scalene traingle"<<endl;
	return 0;
}
