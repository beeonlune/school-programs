#include <iostream>

using namespace std;

int main()
{
    int A[10000];
    int x, d, n, i;
    cin>>x>>d>>n;
    for (i=0; i<n; i++)
    {
        A[i]=x;
        cout<<A[i]<<" ";
        x=x+d;
    }
}
