#include <iostream>
#include <cmath>

using namespace std;

void sixteen (int n)
{
    int i=1, x, y;
    if (n==0)
    {
        cout<<0;
        return;
    }
    if (n<0) cout<<"-";
    x=abs(n);
    while (i<x)
    {
        i=i*16;
    }
    if (i>x) i=i/16;
    while (i>=1)
    {
        y=x%i;
        x=x/i;
        if (x<10) cout<<x;
        else if (x==10) cout<<"A";
        else if (x==11) cout<<"B";
        else if (x==12) cout<<"C";
        else if (x==13) cout<<"D";
        else if (x==14) cout<<"E";
        else if (x==15) cout<<"F";
        x=y;
        i=i/16;
    }
}

int main()
{
    int n;
    cin>>n;
    sixteen(n);
}
