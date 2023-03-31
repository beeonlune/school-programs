#include <iostream>

using namespace std;

int Fib (unsigned int n)
{
    unsigned int i, a, b, c;
    a=1;
    b=1;
    if (n==1 || n==2) return a;
    if (n>2)
    {
        for (i=3; i<=n; i=i+1)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
    }
}

int main()
{
    unsigned int n;
    cin>>n;
    cout<<Fib(n)<<endl;
}
