#include <iostream>

using namespace std;

int simple (unsigned int n)
{
    unsigned int c=0, k=2;
    while (k*k<=n && c==0)
    {
        if (n%k==0) c++;
        k++;
    }
    return (c==0);
}

int verysimple (unsigned int n)
{
    unsigned int b;
    if (simple(n) && n!=1)
    {
        while (n>10)
        {
            n=n/10;
            if (not(simple(n)) || n==1)
            {
                return false;
            }
        }
    }
    else
    {
        return false;
    }
    return true;
}

int main()
{
    unsigned int a, b, i;
    bool k=false;
    cin>>a>>b;
    for (i=a; i<=b; i++)
    {
        if (verysimple(i)==true)
        {
            cout<<i<<" ";
            k=true;
        }
    }
    if (k==false) cout<<0<<endl;
}
