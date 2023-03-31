#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int A[100][100];
    int B[100][100];
    int n, m, i, j, x;
    cin>>n>>m;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            cin>>A[i][j];
        }
    }
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            B[i][j]=A[j][i];
        }
    }
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            cout.width(5);
            cout<<B[i][j];
        }
        cout<<endl;
    }
}
