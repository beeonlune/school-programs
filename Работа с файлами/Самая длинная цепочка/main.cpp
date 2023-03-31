#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, length=1, x_pr=-10000, max_length=1;
    ifstream Fin;
    Fin.open("input.txt");
    while (!Fin.eof())
    {
        if (Fin>>x)
        {
            if (x==x_pr)
            {
                length=length+1;
            }
            if (x!=x_pr)
            {
                length=1;
            }
            x_pr=x;
            if (length>max_length) max_length=length;
        }
    }
    Fin.close();
    ofstream Fout;
    Fout.open("output.txt");
    Fout<<max_length;
    Fout.close();
}
