#include <iostream>

using namespace std;

int main()
{
    int A[10000];
    int n, maxi, i;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>A[n];
    }
    maxi=A[0];
    for (i=0; i<n; i++)
    {
        if (A[i]>=maxi)
        {
            maxi=A[i];
        }
    }
    for (i=0; i<n; i++)
    {
        if (A[i]==maxi) cout<<i+1<<" ";
    }
}
