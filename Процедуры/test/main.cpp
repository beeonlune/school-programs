#include <iostream>
#include <cmath>

using namespace std;

void two (int dec)
{
     int x, bin=0, j;
     if (dec<0)
     {
         x=dec;
         dec=-dec;
     }

    for(j=0; dec>0; j++)
    {
        bin+=(dec%2)*pow(10.0,j);
        dec/=2;
    }
    if (x<0) cout<<-bin<<endl;
    else
    cout <<bin<< endl;
}
main()
{
    int dec;
    cin>>dec;
    two(dec);
}
