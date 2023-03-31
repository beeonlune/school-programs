#include <iostream>

using namespace std;

int main()
{
    int A[10000];
    int B[10000];
    int i, n, m, k_min, k_max, j, c;
    bool f=false, t=false;
    cin>>n>>m;
    for (i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for (j=0; j<m; j++)
    {
        cin>>B[j];
    }
    for (i=0; i<m; i++)
    {
        k_min=0;
        k_max=0;
        c=0;
        f=false;
        t=false;
        for (j=0; j<n; j++)
        {
            if (A[j]==B[i])
            {
                f=true;
                k_min=j+1;
                c=j;
                break;
            }
        }
        if (f==false) k_max=0;
        else if (f==true) for (j=n-1; j>=c; j--)
        {
            if (A[j]==B[i])
            {
                t=true;
                k_max=j+1;
                break;
            }
        }
        if (k_max==0) cout<<k_min<<endl;
        else cout<<k_min<<" "<<k_max<<endl;
    }
}
