#include <iostream>

using namespace std;

void fib(int A[])
{
	int n, i, a, b, c, k;
	a=1;
	b=1;
	k=0;
	n=10000;
    A[0]=1;
    A[1]=1;
    k=2;
    for (i=3; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        A[k]=b;
        k=k+1;
    }
}

int main()
{
    int A[10000];
    int B[10000];
    int C[10000];
    int i, j, n, k=0;
    bool f=false;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>B[i];
    }
    fib(A);
    for (i=0; i<n; i++)
    {
        for (j=0; j<10000; j++)
        {
            if (A[j]==B[i])
            {
                f=true;
                C[k]=A[j];
                k=k+1;
                break;
            }
        }
    }
    if (f==false) cout<<0<<endl;
    else if (f==true) for (i=0; i<k; i++)
    {
        cout<<C[i]<<" ";
    }

}
