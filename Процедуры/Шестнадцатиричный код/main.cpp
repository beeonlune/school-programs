#include <iostream>
#include <cmath>

using namespace std;

void sixteen (int n)
{
    int i, x, y, z;
    z=16*16*16;
    x=n;
    for (i=4; i>=1; i=i-1)
    {
        y=x%z;
        x=x/z;
        if (x<10) cout<<x;
        else if (x==10) cout<<"A";
        else if (x==11) cout<<"B";
        else if (x==12) cout<<"C";
        else if (x==13) cout<<"D";
        else if (x==14) cout<<"E";
        else if (x==15) cout<<"F";
        x=y;
        z=z/16;
    }
}
main()
{
    int n;
    cin>>n;
    sixteen(n);
}
