#include <iostream>
#include <iterator>
#include <functional>
#include <vector>

using namespace std;

vector<int> coins, step;
vector<tuple<int, int, int>> A(10000);
int k, n;

int suicide(int l)
{
    int maxc=-10001, maxk, i, g, b;
    if (l<=1)
        return 0;
    if (get<1>(A[l])==0)
    {

        for (i=1; i<k+1; i++)
            {
                g=suicide(l-i);
                b=maxc;
                maxc=max(maxc, g);
                if (b!=maxc) maxk=l-i;
            }

        get<0>(A[l])=maxc+coins[l];
        get<1>(A[l])=1;
        get<2>(A[l])=maxk;

        return maxc+coins[l];
    }

    else
    {
        return get<0>(A[l]);
    }
}

int main()
{
    int i, N;

    cin>>n>>k;

    coins.resize(n+1);

    coins[0]=0;
    coins[coins.size()-1] = 0;

    for (i=2; i<n; i++)
    {
        cin>>coins[i];
    }

    if(n!=3)
    {
        cout<<suicide(n)<<endl;
        N = n;
        while (N!=1)
        {
            step.push_back(get<2>(A[N]));
            N=get<2>(A[N]);
        }
        cout<<step.size()<<endl;
        for (i=step.size()-1; i>-1; i--)
        {
            cout<<step[i]<< " ";
        }
        cout<<n;
    }

    else
    {
        if (coins[2]>0)
        {
            cout<<coins[2]<<endl;
            cout<<2<<endl;
            cout<<"1 2 3"<<endl;
        }
        else
            {
            cout<<0<<endl;
            cout<<1<<endl;
            cout<<"1 3"<<endl;
            }
    }
}
