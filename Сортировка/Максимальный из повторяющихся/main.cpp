#include <iostream>

using namespace std;

int main()
{
    int A[10000];
    int n, maxi=-1000000, i, j;
    bool f=false;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for (i=0; i<n; i++)
    {
        for (j=n-1; j>i; j--)
        {
            if (A[j]==A[i] && A[j]>=maxi)
            {
                maxi=A[j];
                f=true;
            }
        }
    }
    if (f==false) cout<<-1<<endl;
    else if (f==true) cout<<maxi<<endl;
}
