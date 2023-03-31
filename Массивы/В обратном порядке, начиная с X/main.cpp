#include <iostream>

using namespace std;

int main()
{
    int A[10000];
    int x, n, i;
    cin>>x>>n;
    for (i=0; i<n; i++)
    {
        A[i]=x;
        x=x+1;
    }
    for (i=n-1; i>=0; i--)
    {
        cout<<A[i]<<" ";
    }
}
