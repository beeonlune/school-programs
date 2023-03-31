#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min3(int a, int b, int c)
{
    int mini;

    if (a<=b && a<=c) mini=a;
    else if (b<=c && b<=a) mini=b;
    else if (c<=a && c<=b) mini=c;

    return mini;
}


int main()
{
    int K[1001];
    vector <int> A;
    vector <int> P;
    int n, i, l, delta, kn, pn;

    cin>>n;

    if (n==1) cout<<1<<endl<<1<<endl;
    else if (n==2) cout<<2<<endl<<1<<" "<<1<<endl;
    else if (n==3) cout<<3<<endl<<1<<" "<<1<<" "<<1<<endl;
    else if (n==4) cout<<4<<endl<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
    else if (n==5) cout<<1<<endl<<5<<endl;
    else if(n>=6)
    {
        K[0]=0;
        K[1]=1;
        P.push_back(1);
        K[2]=2;
        P.push_back(1);
        K[3]=3;
        P.push_back(1);
        K[4]=4;
        P.push_back(1);
        K[5]=1;
        P.push_back(5);
        for (i=6; i<n+1; i++)
        {
            l=min3(K[i-1], K[i-5], K[i-6]);
            K[i]=1+l;
            if (l==K[i-1]) P.push_back(1);
            else if (l==K[i-5]) P.push_back(5);
            else if (l==K[i-6]) P.push_back(6);
        }
        cout<<K[n]<<endl;

        delta=n-P[n-1];

        A.push_back(P[n-1]);

        while(delta>0)
        {
            A.push_back(P[delta-1]);
            delta=delta-P[delta-1];
        }

        for (i=0; i<A.size(); i++)
        {
            cout<<A[i]<<" ";
        }

    }
}
