#include <iostream>
#include <cmath>

using namespace std;

void sys (int n, int b)
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
        i=i*b;
    }
    if (i>x) i=i/b;
    while (i>=1)
    {
        y=x%i;
        x=x/i;
        cout<<x;
        x=y;
        i=i/b;
    }
}

int main()
{
    int n, b;
    cin>>n>>b;
    sys(n,b);
}
