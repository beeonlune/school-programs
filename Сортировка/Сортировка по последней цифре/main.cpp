#include <iostream>

using namespace std;

int main()
{
    int A[10000];
    int n, i, j, temp;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if ((A[j]%10)>(A[j+1]%10))
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    for (i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
}
