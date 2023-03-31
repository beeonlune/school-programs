#include <iostream>

using namespace std;

void two (int n)
{
    int i=1, x, y;
    if (n==0)
    {
        cout<<0;
        return;
    }
    x=n;
    while (i<x)
    {
        i=i*-2;
    }
    if (i>x) i=i/(-2);
    while (i>=1)
    {
        y=x%i;
        x=x/i;
        cout<<x;
        x=y;
        i=i/(-2);
    }
}

int main()
{
    int n;
    cin>>n;
    two(n);
}
