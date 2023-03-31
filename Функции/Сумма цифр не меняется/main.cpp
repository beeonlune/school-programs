#include <iostream>

using namespace std;

int Summ (int n)
{
    int sum=0;
    while (n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

int main()
{
    int i, a, b, s, j;
    bool f=true, k=false;
    cin>>a>>b;
    for (i=a; i<=b; i++)
    {
        s=Summ(i);
        f=true;
        j=2;
        while (j<=9 && f==true)
        {
            if (Summ(i*j)!=s)
            {
                f=false;
            }
            j=j+1;
        }
        if (f==true)
        {
            cout<<i<<" ";
            k=true;
        }
    }
    if (k==false) cout<<0<<endl;
}
