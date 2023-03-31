#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> A;
    int n, k, i, j;

    cin>>n>>k;

    A.push_back(1);

    for (i=1; i<n; i++)
    {
        for (j=i-1; j>i-k-1; j--)
        {
            if (j<0) break;
            A.push_back(0);
            A[i]=A[i]+A[j];
        }
    }

    cout<<A[n-1]<<endl;
}
