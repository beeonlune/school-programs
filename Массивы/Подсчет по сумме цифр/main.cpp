#include <iostream>
#include <cstdlib>

using namespace std;

int sum(int n)
{
    int k=0;
    while (n>0)
    {
        k=k+n%10;
        n=n/10;
    }
    return k;
}

int main()
{
    int M[10000];
    int a, b, n, i, k, s=0;
    cin>>a>>b>>n>>k;
    for (i=0; i<n; i++)
    {
        M[i]=a+rand()%(b-a+1);
        if (i!=(n-1)) cout<<M[i]<<" ";
    }
    cout<<M[n-1]<<endl;
    for (i=0; i<n;i++)
    {
        if (sum(M[i])==k) s=s+1;
    }
    cout<<s<<endl;
}
