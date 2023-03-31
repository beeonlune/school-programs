#include <iostream>
#include <cmath>

using namespace std;

int n;
int a[100002];

int closest(int c)
{
    int l=0, r=n-1, mid, i;
    for (i=0; i<100; i++)
    {
        mid=(r+l)/2;
        if (a[mid]>c)
            r=mid;
        else
            l=mid;
    }
    if (l!=r)
        return (abs(a[r]-c)<abs(a[l]-c) ? r:l);
    return l;
}

int main() {
    int k, i, c;
    cin>>n>>k;
    for (i = 0; i < n; ++i)
        cin>>a[i];
    for (i = 0, c; i < k; ++i)
        {
            cin>>c;
            cout<<a[closest(c)]<<endl;
        }
}
