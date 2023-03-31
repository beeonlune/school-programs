#include <iostream>

using namespace std;

int A[1001][1001];
char B[1001][1001];

int main()
{
    int n, m, k, i, j;
    string s;
    cin>>n>>m;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            cin>>A[i][j];
        }
    }

    for (i=1; i<n; i++)
    {
        A[i][0]=A[i][0]+A[i-1][0];
        B[i][0]='D';
    }
    for (j=1; j<m; j++)
    {
        A[0][j]=A[0][j]+A[0][j-1];
        B[0][j]='R';
    }
    for (i=1; i<n; i++)
    {
        for (j=1; j<m; j++)
        {
            if (A[i][j-1]>A[i-1][j])
            {
                A[i][j]=A[i][j]+A[i][j-1];
                B[i][j]='R';
            }
            else
            {
                A[i][j]=A[i][j]+A[i-1][j];
                B[i][j]='D';
            }
        }
    }

    i=n-1;
    j=m-1;

    for (k=m+n-2; k>=0; k--)
    {
        s=s+B[i][j];
        if (B[i][j]=='D') i=i-1;
        else j=j-1;
    }

    cout<<A[n-1][m-1]<<endl;

    for (i=s.size()-2; i>=0; i--)
    {
        cout<<s[i];
    }
}
