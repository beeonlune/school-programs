#include <iostream>

using namespace std;

void number (int a)
{
	int c=0, b=1;
	while (b<a)
	{
		b=b*10;
	}
	if (b>a) b=b/10;
	while (a>0)
	{
		c=c*10+a%10;
		a=a/10;
	}
	while (c>0 || b>0)
	{
		cout<<c%10<<endl;
		c=c/10;
		b=b/10;
    }
}
int main()
{
	int a;
	cin>>a;
	if (a==0) cout<<0<<endl;
	else
	number(a);
}
