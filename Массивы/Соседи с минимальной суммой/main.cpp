#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int M[10000];
    int a, b, n, i, mini, n1, n2;
    cin>>a>>b>>n;
    for (i=0; i<n; i++)
    {
        M[i]=a+rand()%(b-a+1);
        if (i!=(n-1))
        cout<<M[i]<<" ";
    }
    cout<<M[n-1]<<endl;
    mini=M[0]+M[1];
    for (i=2; i<n; i++)
    {
        if (M[i]+M[i-1]<=mini)
        {
            mini=M[i]+M[i-1];
            n1=i-1;
            n2=i;
        }
    }
    cout<<n1+1<<" "<<n2+1<<endl;
}
