#include <iostream>

using namespace std;

void roll(int A[], int n, int shift)
{

    int i, to_copy_to;
    if (shift>n) shift=shift-n;
    int tmp[n-1]={0};
    for (i=0; i<shift; i++)
    {
        tmp[i]=A[n-shift+i];
    }
    to_copy_to=n-1;
    for (i=n-shift-1; i>-1; i--)
    {
        A[to_copy_to]=A[i];
        to_copy_to=to_copy_to-1;
    }
    for (i=0; i<shift; i++)
    {
        A[i]=tmp[i];
    }
}

int main()
{
    int A[10000];
    int n, i, r;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>A[i];
    }
    cin>>r;
    roll(A, n, r);
    for (i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
}
