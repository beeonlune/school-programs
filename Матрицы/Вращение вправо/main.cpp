#include <iostream>
#include <iomanip>

int main()
{
    int A[100][100];
    int B[100][100];
    int n, i, j;
    cin>>n;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            cin>>A[i][j];
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            B[j][n-i-1]=A[i][j];
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            cout.width(3);
            cout<<B[i][j];
        }
        cout<<endl;
    }
}
