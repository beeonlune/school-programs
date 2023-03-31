#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int l, k, i, j, b, n;
    int A[50] = {0};
    int is_bad[50] = {0};

    cin>>n>>k>>l;

    for (i=0; i<l; i++)
    {
        cin>>b;
        is_bad[b]=1;
    }

    if (is_bad[1]==0) A[1] = 1;
    else
    {
        cout<<0<<endl;
        return 0;
    }

    for (i=2; i<n+1; i++)
    {
        if (is_bad[i]==0)
        {
            for (j=1; j<=k; j++)
            {
                if (i-j>=1)
                {
                    A[i]=A[i]+A[i-j];
                }
            }
        }
    }

    cout<<A[n]<<endl;
}
