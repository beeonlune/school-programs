#include <iostream>

using namespace std;

void figures (int n)
{
    unsigned int i, a, b, c;
    a=1;
    b=1;
    if (n==1) cout<<1<<endl;
    if (n>=2) cout<<a<<" "<<b<<" ";
    for (i=3; i<=n; i=i+1)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<b<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    figures(n);
}
