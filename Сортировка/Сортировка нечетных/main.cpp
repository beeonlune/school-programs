#include <iostream>

using namespace std;

int main()
{
    int A[10000];
    int n, i, j, x;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (A[i]%2!=0 && A[j]%2!=0 && A[i]>A[j])
            {
                x=A[i];
                A[i]=A[j];
                A[j]=x;
            }
        }
    }
    for (i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
}
