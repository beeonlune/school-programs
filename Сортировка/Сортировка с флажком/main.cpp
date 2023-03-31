#include <iostream>

using namespace std;

int main()
{
    int A[10000];
    int n, i, j, temp, k;
    bool f=false;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>A[i];
    }
    do
    {
        f=true;
        for (i=0; i<n-1; i++)
        {
            if (A[i]>A[i+1])
            {
                f=false;
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
    }
    while (f==true);
    for (i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
}
