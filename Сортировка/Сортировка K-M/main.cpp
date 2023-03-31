#include <iostream>

using namespace std;

void sort_up(int A[], int n)
{
    int i, j, temp;
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if (A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

void sort_down(int A[], int n)
{
    int i, temp, j;
    for (i=1; i<n; i++)
    {
        for (j=0; j<n-i; j++)
        {
            if (A[j]<A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main()
{
    int A[10000];
    int B[10000];
    int n, k, m, d, i, length, j=0;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>A[i];
    }
    cin>>k>>m>>d;
    if (k!=m)
    {
        length=m-k+1;
        for (i=k-1; i<m; i++)
        {
            B[j]=A[i];
            j=j+1;
        }
        if (d==1) sort_up(B, length);
        else if (d==-1) sort_down(B, length);
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
    else if (k==m)
    {
        for (i=0; i<n; i++)
        {
            cout<<A[i]<<" ";
        }
    }
}
