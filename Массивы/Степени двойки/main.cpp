#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A[10000];
    int n, x, i;
    cin>>n;
    x=n;
    for (i=0; i<n; i++)
    {
        A[i]=pow(2, x);
        cout<<A[i]<<" ";
        x=x-1;
    }
}
