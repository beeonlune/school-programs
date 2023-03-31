#include <iostream>

using namespace std;

int main()
{
    int A[10000];
    int n, i, x;
    cin>>n;
    x=1;
    for (i=0; i<n; i++)
    {
        A[i]=x*x;
        cout<<A[i]<<" ";
        x=x+1;
    }
}
