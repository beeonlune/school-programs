#include <iostream>

using namespace std;

int main()
{
    int A[10000];
    int n, i, k=0, j;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for (i=0; i<n; i++)
    {
        for (j=n-1; j>i; j--)
        {
            if (A[j]==A[i])
            {
                A[j]=0;
            }
        }
    }
    for (i=0; i<n; i++)
    {
        if (A[i]==0) k=k+1;
        if (A[i]!=0) cout<<A[i]<<" ";
    }
    while (k>0)
    {
        cout<<0<<" ";
        k=k-1;
    }
}
