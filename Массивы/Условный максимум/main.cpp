#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int M[10000];
    int a, b, n, i, maxi;
    cin>>a>>b>>n;
    maxi=-1;
    for (i=0; i<n; i++)
    {
        M[i]=a+rand()%(b-a+1);
        if (i!=(n-1)) cout<<M[i]<<" ";
    }
    cout<<M[n-1]<<endl;
    for (i=0; i<n; i++)
    {
        if (M[i]%2==0 && M[i]>maxi) maxi=M[i];
    }
    cout<<maxi<<endl;
}
