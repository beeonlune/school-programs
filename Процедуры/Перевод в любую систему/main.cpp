#include <iostream>
#include <cmath>

using namespace std;

void sys (int n, int b)
{
    int i=1, x, y;
    if (n==0)
    {
        cout<<0;
        return;
    }
    if (n<0) cout<<"-";
    x=abs(n);
    while (i<x)
    {
        i=i*b;
    }
    if (i>x) i=i/b;
    while (i>=1)
    {
        y=x%i;
        x=x/i;
        if (x<10) cout<<x;
        else if (x==10) cout<<"A";
        else if (x==11) cout<<"B";
        else if (x==12) cout<<"C";
        else if (x==13) cout<<"D";
        else if (x==14) cout<<"E";
        else if (x==15) cout<<"F";
        else if (x==16) cout<<"G";
        else if (x==17) cout<<"H";
        else if (x==18) cout<<"I";
        else if (x==19) cout<<"J";
        else if (x==20) cout<<"K";
        else if (x==21) cout<<"L";
        else if (x==22) cout<<"M";
        else if (x==23) cout<<"N";
        else if (x==24) cout<<"O";
        else if (x==25) cout<<"P";
        else if (x==26) cout<<"Q";
        else if (x==27) cout<<"R";
        else if (x==28) cout<<"S";
        else if (x==29) cout<<"T";
        else if (x==30) cout<<"U";
        else if (x==31) cout<<"V";
        else if (x==32) cout<<"W";
        else if (x==33) cout<<"X";
        else if (x==34) cout<<"Y";
        else if (x==35) cout<<"Z";
        x=y;
        i=i/b;
    }
}
int main()
{
    int n, b;
    cin>>n>>b;
    sys(n, b);
}
