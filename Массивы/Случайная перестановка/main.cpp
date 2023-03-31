#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int A[10000];
    int n, i, j;
    cin>>n;
    for (i=0; i<n; i++)
    {
        A[i]=1+rand()%n;
        if (i>=1)
        {
            for (j=0; j<i; j++)
            {
                if (A[j]==A[i]) i=i-1;
            }
        }
    }
    for (i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

}
