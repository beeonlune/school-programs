#include <iostream>
#include <cmath>

using namespace std;
void two (int n)
{
    int x, i=1, y;
    if (n<0) cout<<"-";
    x=abs(n);
    while (i<x)
    {
        i=i*2;
    }
    if (i>x) i=i/2;
    while (i>=1)
    {
        y=x%i;
        x=x/i;
        cout<<x;
        x=y;
        i=i/2;
    }
}
int main()
{
    int n;
    cin>>n;
    two(n);
}
