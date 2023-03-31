#include <iostream>

using namespace std;

int A[51][51];
int n, m;

int ways (int i, int j)
{
    if (A[i][j]>=0)
    {
        return (A[i][j]);
        return 0;
    }

    A[i][j]=0;
    if (i>=3)
    {
        if (j-1>=1) A[i][j]=A[i][j]+ways(i-2, j-1);
    }
    if (j-2>=1)
    {
        if (i-1>=1) A[i][j]=A[i][j]+ways(i-1, j-2);
    }
    return A[i][j];
}

int main()
{
    int i, j;
    cin>>n>>m;

    for (i=0; i<n+1; i++)
    {
        for (j=0; j<m+1; j++)
        {
            A[i][j]=-1;
        }
    }
    A[1][1]=1;
    cout<<ways(n, m)<<endl;
}
