#include <iostream>

using namespace std;

int main()
{
    int n, i;
    int A[10000];

    cin>>n;

    A[1]=2;
    A[2]=4;

    for (i=3; i<=n; i++)
    {
        A[i]=A[i-2]+A[i-1];
    }

    cout<<A[n]<<endl;
}
