#include <iostream>

using namespace std;

int main()
{
    int A[10000];
    int n, i, j, k, temp;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>A[i];
    }
    j=n;
    do
    {
        k=j;
        j=0;
        for (i=1; i<k-1; i++)
        {
            if (A[i+1]<A[i])
            {
                j=i;
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
                for (temp=0; temp<n; temp++)
                {
                    cout<<A[temp]<<" ";
                }
                cout<<"\n";
            }
        }
    }
    while (j==0);
    if (k==n) cout<<0<<endl;
}
