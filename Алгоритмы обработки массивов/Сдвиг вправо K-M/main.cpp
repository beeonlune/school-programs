#include <iostream>

using namespace std;

void roll(int A[], int n, int shift)
{
    int i, to_copy_to;
    if (shift>n) shift-=n;
    int tmp[n-1]={0};
    for (i=0; i<shift; i++)
    {
        tmp[i]=A[n-shift+i];
    }
    to_copy_to=n-1;
    for (i=n-shift-1; i>-1; i--)
    {
        A[to_copy_to]=A[i];
        to_copy_to=to_copy_to-1;
    }
    for (i=0; i<shift; i++)
    {
        A[i]=tmp[i];
    }
}

int main()
{
    int A[10000];
    int B[10000];
    int n, k, m, r, i, j=0, length, x;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>A[i];
    }
    cin>>k>>m>>r;
    if (k>m)
    {
        x=k;
        k=m;
        m=x;
    }
    length=m-k+1;
    for (i=k-1; i<m; i++)
    {
        B[j]=A[i];
        j=j+1;
    }
    roll(B, length, r);
    for (i=0; i<k-1; i++)
    {
        cout<<A[i]<<" ";
    }
    for (i=0; i<length; i++)
    {
        cout<<B[i]<<" ";
    }
    for (i=m; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
}
