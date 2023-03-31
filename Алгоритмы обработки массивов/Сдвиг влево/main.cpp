#include <iostream>

using namespace std;

void roll(int A[], int n, int l)
{
     int i,j,c;
     for (i=1; i<=l; i++)
     {
         c=A[0];
         for (j=0; j<n-1; j++) A[j]=A[j+1];
         A[n-1]=c;
     }
}

int main()
{
    int A[10000];
    int n, r, i;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>A[i];
    }
    cin>>r;
    roll(A, n, r);
    for (i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
}
