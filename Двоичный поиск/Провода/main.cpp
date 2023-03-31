#include <iostream>
#include <limits>

using namespace std;

int cut(int a[], int len, int n)
{
    int sum, i, res;
    sum=0;
    for (i=0; i<n; i++)
    {
        sum=sum+a[i]/len;
        if (sum>10000)
        {
            res=sum;

        }
    }
    return res;
}

int main()
{
    int a[10000];
    int i, mini, mid, maxi, n, k;
    cin>>n>>k;
    for (i=0; i<n; i++)
    {
        cin>>a[i];
    }
    mini=0;
    maxi=numeric_limits<int>::max();
    while (maxi>mini+1)
    {
        mid=(mini+maxi)/2;
        if (cut(a, mid, n)>=k)
            mini=mid;
        else
            maxi=mid;
    }
    cout<<mini<<endl;
}
