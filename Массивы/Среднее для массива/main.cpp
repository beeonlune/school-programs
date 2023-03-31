#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    int M[10000];
    int a, b, n, i, s=0;
    float sr;
    cin>>a>>b>>n;
    for (i=0; i<n; i++)
    {
        M[i]=a+rand()%(b-a+1);
        if (i!=(n-1)) cout<<M[i]<<" ";
    }
    cout<<M[n-1]<<endl;
    for (i=0; i<n; i++)
    {
        s=s+M[i];
    }
    sr=(float)s/(float)n;
    cout<<fixed<<setprecision(3)<<sr<<endl;
}
