#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int A[10000];
    int a, b, n, i, maxs, n1, n2;
    bool f=false;
    cin>>a>>b>>n;
    for (i=0; i<n; i++)
    {
        A[i]=a+rand()%(b-a+1);
        if (i!=(n-1)) cout<<A[i]<<" ";
    }
    cout<<A[n-1]<<endl;
    maxs=min(a,b);
    for (i=0; i<(n/2); i++)
    {
        if ((A[i]+A[n-1-i])>=maxs && (A[i]+A[n-1-i])%2==0)
        {
            maxs=A[i]+A[n-1-i];
            n1=i+1;
            n2=n-i;
            f=true;
        }
    }
    if (n%2!=0 && A[n/2]%2==0 && A[n/2]>=maxs)
    {
        maxs=A[n/2];
        n1=n/2+1;
        cout<<n1<<endl;
        f=true;
    }
    else
    {
        if (f==false) cout<<"00"<<endl;
        else cout<<n1<<" "<<n2<<endl;
    }
}
