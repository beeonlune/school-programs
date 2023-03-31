#include <iostream>

using namespace std;

int main()
{
    int A[10000];
    int n, i, maxi, k=0;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>A[i];
    }
    maxi=A[0];
    for (i=0; i<n; i++)
    {
        if (A[i]>=maxi) maxi=A[i];
    }
    for (i=0; i<n; i++)
    {
        if (A[i]==maxi) k=k+1;
    }
    cout<<maxi<<" "<<k;
}
