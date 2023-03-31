#include <iostream>

using namespace std;

int main()
{
    int A[46] = {0};
    int n, i;

    cin>>n;

    A[1] = 1;
    A[2] = 1;

    for (i=3; i<=n+1; i++)
    {
        A[i]=A[i-2]+A[i-1];
    }

    cout<<A[n]<<endl;

}
