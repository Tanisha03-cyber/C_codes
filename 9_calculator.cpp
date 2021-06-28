//Write a program to write a simple calculator using switch case statements
#include<iostream>
using namespace std;
int main()
{
	char ch;
	float a,b;
	cout<<"enter the numbers";
	cin>>a>>b;
	l1: cout<<"enter the operation(+ or - or * or /) to perform operation on calculator"<<endl;
	cin>>ch;
	switch(ch)
		{
			case '+': cout<<"addition of numbers is "<<(a+b)<<endl;
			break;
			case '-': cout<<"subtraction of numbers is "<<(a-b)<<endl;
				break;
			case '*': cout<<"multiplication of numbers is "<<(a*b)<<endl;
			break;
			case '/': cout<<"division of numbers is "<<(a/b)<<endl;
			break;
			default:cout<<"enter a valid operator"<<endl;
			goto l1;	
		}
	return 0;
}

