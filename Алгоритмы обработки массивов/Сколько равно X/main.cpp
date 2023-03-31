#include <iostream>

using namespace std;

int main()
{
    int A[10000];
    int n, x, k=0, i;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>A[i];
    }
    cin>>x;
    for (i=0; i<n; i++)
    {
        if (A[i]==x) k=k+1;
    }
    cout<<k<<endl;
}
