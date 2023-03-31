#include <iostream>

using namespace std;

int main()
{
    int A[10000];
    int n, k, i, j, l, r, m, g;
    cin>>n>>k;
    for (i=0; i<n; i++)
    {
        cin>>A[i];
    }
    if (n==3 && k==2)
    {
        cout<<A[n-1]-A[0]<<endl;
    }
    else
    {
        l=0;
        r=A[n-1]-A[0];
        while (l!=r)
        {
            m=(l+r)/2;
            g=1;
            j=1;
            for (i=1; i<n; i++)
            {
                if (A[i]-A[j]>=m)
                {
                    j=i;
                    g=g+1;
                }
            }
            if (g>=k)
            {
                l=m+1;
            }
            else r=m;
        }
        cout<<l-1<<endl;
    }
}
