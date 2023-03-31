#include <iostream>

using namespace std;

int main()
{
    int A[10000];
    int n, x, i;
    bool f=false;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>A[i];
    }
    cin>>x;
    for (i=0; i<n; i++)
    {
        if (A[i]==x)
        {
            f=true;
            cout<<i+1<<" ";
        }
    }
    if (f==false) cout<<-1<<endl;
}
