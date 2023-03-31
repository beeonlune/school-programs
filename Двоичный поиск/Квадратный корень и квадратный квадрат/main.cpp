#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double idontwanttodothis(double x)
{
    return x*x+sqrt(x);
}

int main()
{
    double c, left, right, middle, s;
    cin>>c;
    left=0;
    right=c;
    while (right-left>1e-10)
    {
        middle=(left+right)/2;
        s=idontwanttodothis(middle);
        if (s>c)
        {
            right=middle;
        }
        else left=middle;
    }
    cout<<fixed<<setprecision(6)<<left<<endl;
}
