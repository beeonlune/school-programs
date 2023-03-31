#include <iostream>

using namespace std;

int main()
{
    int A[10000];
    int B[10000];
    int n, i, k=0;
    bool f=false;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for (i=0; i<n; i++)
    {
        if (A[i]<0)
        {
            f=true;
            B[k]=A[i];
            k=k+1;
        }
    }
    if (f==false) cout<<0<<endl;
    else if (f==true) for (i=0; i<k; i++)
    {
        cout<<B[i]<<" ";
    }
}
