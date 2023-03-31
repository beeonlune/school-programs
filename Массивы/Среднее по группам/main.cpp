#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    int M[10000];
    int a, b, n, i, s50=0, s=0, k50=0;
    float sr50, sr;
    cin>>a>>b>>n;
    for (i=0; i<n; i++)
    {
        M[i]=a+rand()%(b-a+1);
        if (i!=(n-1)) cout<<M[i]<<" ";
    }
    cout<<M[n-1]<<endl;
    for (i=0; i<n; i++)
    {
        if (M[i]<50)
        {
            s50=s50+M[i];
            k50=k50+1;
        }
        else s=s+M[i];
    }
    if (k50==0) sr50=0;
    else sr50=(float)s50/(float)k50;
    if (n-k50==0) sr=0;
    else sr=(float)s/(float)(n-k50);
    cout<<fixed<<setprecision(3)<<sr50<<" "<<sr<<endl;


}
