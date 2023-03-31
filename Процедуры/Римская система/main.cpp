#include <iostream>

using namespace std;

void rome (int a)
{
    if (a/1000==1) cout<<"M";
    if (a/1000==2) cout<<"MM";
    if (a/1000==3) cout<<"MMM";
    if ((a/100)%10==1) cout<<"C";
    if ((a/100)%10==2) cout<<"CC";
    if ((a/100)%10==3) cout<<"CCC";
    if ((a/100)%10==4) cout<<"CD";
    if ((a/100)%10==5) cout<<"D";
    if ((a/100)%10==6) cout<<"DC";
    if ((a/100)%10==7) cout<<"DCC";
    if ((a/100)%10==8) cout<<"DCCC";
    if ((a/100)%10==9) cout<<"CM";
    if ((a/10)%10==1) cout<<"X";
    if ((a/10)%10==2) cout<<"XX";
    if ((a/10)%10==3) cout<<"XXX";
    if ((a/10)%10==4) cout<<"XL";
    if ((a/10)%10==5) cout<<"L";
    if ((a/10)%10==6) cout<<"LX";
    if ((a/10)%10==7) cout<<"LXX";
    if ((a/10)%10==8) cout<<"LXXX";
    if ((a/10)%10==9) cout<<"XC";
    if (a%10==1) cout<<"I";
    if (a%10==2) cout<<"II";
    if (a%10==3) cout<<"III";
    if (a%10==4) cout<<"IV";
    if (a%10==5) cout<<"V";
    if (a%10==6) cout<<"VI";
    if (a%10==7) cout<<"VII";
    if (a%10==8) cout<<"VIII";
    if (a%10==9) cout<<"IX";
}
int main()
{
    int a;
    cin>>a;
    rome(a);
}
