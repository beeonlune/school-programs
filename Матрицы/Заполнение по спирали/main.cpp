#include <iostream>

using namespace std;

int main()
{
    int A[100][100];
    int n, m, i=0, j, k=0, p=1;
    cin>>n>>m;
    while (i<n*m)
	{
		k++;
		for (j=k-1; j<m-k+1; j++)
		{
			A[k-1][j]=p++;
			i++;
		}
		for (j=k; j<n-k+1; j++)
		{
			A[j][m-k]=p++;
			i++;
		}
		for (j=m-k-1; j>=k-1; j--)
		{
			A[n-k][j]=p++;
			i++;
		}
		for (j=n-k-1; j>=k; j--)
		{
			A[j][k-1]=p++;
			i++;
		}
	}
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			cout.width(5);
			cout<<A[i][j];
		}
		cout<<endl;
	}
}

