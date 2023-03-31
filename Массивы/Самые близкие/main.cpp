#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int A[10000];
    int a, b, n, i, j, n1, n2, mins;
    cin>>a>>b>>n;
    for (i=0; i<n; i++)
    {
        A[i]=a+rand()%(b-a+1);
        if (i!=(n-1)) cout<<A[i]<<" ";
    }
    cout<<A[n-1]<<endl;
    mins=abs(A[1]-A[0]);
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (abs(A[i]-A[j])<=mins)
            {
                mins=abs(A[i]-A[j]);
                n1=i;
                n2=j;
            }
        }
    }
    cout<<n1+1<<" "<<n2+1<<endl;
}
