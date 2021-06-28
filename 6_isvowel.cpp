//check if an alphabet is vowel or not
#include<iostream>
using namespace std;
int main()
{
	char b,a;
	cin>>b;
	a=toupper(b);
	if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	cout<<b<<" character is vowel";
	else
	cout<<b<<" character is a consonant";
	return 0;
}
