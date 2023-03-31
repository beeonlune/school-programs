#include <iostream>

using namespace std;

int main()
{
    int A[10000];
    int n, x, i;
    cin>>x>>n;
    for (i=0; i<n; i++)
    {
        A[i]=x;
        cout<<A[i]<<" ";
        x=x+1;
    }
}
