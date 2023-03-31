#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    float s=0, k=0, sa;
    ifstream Fin;
    Fin.open("input.txt");
    while (!Fin.eof())
    {
        if (Fin>>x)
        {
            s=s+x;
            k=k+1;
        }
    }
    Fin.close();
    sa=s/k;
    ofstream Fout;
    Fout.open("output.txt");
    Fout<<fixed<<setprecision(3)<<sa;
    Fout.close();
}
