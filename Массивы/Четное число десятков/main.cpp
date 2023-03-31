#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int M[10000];
    int a, b, n, i, k=0;
    cin>>a>>b>>n;
    for (i=0; i<n; i++)
    {
        M[i]=a+rand()%(b-a+1);
        if (i!=(n-1)) cout<<M[i]<<" ";
    }
    cout<<M[n-1]<<endl;
    for (i=0; i<n; i++)
    {
        if ((M[i]/10)%10 %2==0) k=k+1;
    }
    cout<<k<<endl;
}
