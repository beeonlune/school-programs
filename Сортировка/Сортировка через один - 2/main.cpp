#include <iostream>

using namespace std;

void sort_up(int A[], int n)
{
    int i, j, temp;
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if (A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

void sort_down(int A[], int n)
{
    int i, temp, j;
    for (i=1; i<n; i++)
    {
        for (j=0; j<n-i; j++)
        {
            if (A[j]<A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main()
{
    int A[10000];
    int B[10000];
    int C[10000];
    int D[10000];
    int n, i, j=0, k=0, length_b, length_c, x=0;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for (i=0; i<n; i++)
    {
        if (i%2==0)
        {
            B[j]=A[i]; //элементы с нечетными номерами
            j=j+1;
        }
    }
    length_b=j;
    for (i=0; i<n; i++)
    {
        if (i%2!=0)
        {
            C[k]=A[i]; //элементы с четными номерами
            k=k+1;
        }
    }
    length_c=k;
    sort_up(B, length_b);
    sort_down(C, length_c);
    for (i=0; i<n; i++)
    {
        D[x]=B[i];
        x=x+1;
        D[x]=C[i];
        x=x+1;
    }
    for (i=0; i<n; i++)
    {
        cout<<D[i]<<" ";
    }
}
