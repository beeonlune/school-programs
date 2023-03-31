#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    string s, name, surname, b;
    int k=1, a, p, c;
    ifstream Fin;
    Fin.open("input.txt");
    ofstream Fout;
    Fout.open("output.txt");
    getline(Fin, b);
    a=atoi(b.c_str());
    b.erase(0, b.size());
    while (getline(Fin, s))
    {
        if (s[0]!='0' && s[0]!='1' && s[0]!='2' && s[0]!='3' && s[0]!='4' && s[0]!='5' && s[0]!='6' && s[0]!='7' && s[0]!='8' && s[0]!='9')
        {
            p=s.find(" ");
            surname=s.substr(0, p);
            s=s.substr(p+1);
            p=s.find(" ");
            name=s.substr(0, p);
            s=s.substr(p+1);
            c=atoi(s.c_str());
            if (c>a)
            {
                Fout<<k<<")"<<" "<<surname<<" "<<name<<endl;
                k=k+1;
            }
        }
        else continue;
    }
    Fout<<k-1<<endl;
    Fout.close();
    Fin.close();
}
