#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, mini, maxi;
    mini=2147483647;
    maxi=0;
    ifstream Fin;
    Fin.open("input.txt");
    while (!Fin.eof())
    {
        if (Fin>>x)
        {
            if ((x>0) && (x%2==0) && (x>=maxi))
            {
                maxi=x;
            }
            if ((x>0) && (x%2==0) && (x<=mini))
            {
                mini=x;
            }
        }
    }
    Fin.close();
    if (maxi==0)
    {
        ofstream Fout;
        Fout.open("output.txt");
        Fout<<maxi;
        Fout.close();
    }
    else if (maxi!=0)
    {
        ofstream Fout;
        Fout.open("output.txt");
        Fout<<mini<<" "<<maxi;
        Fout.close();
    }
}
