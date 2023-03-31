#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string s, s_max, s_curr;
    int i, id=0, len, m=0, k=0;
    ifstream Fin;
    Fin.open("input.txt");
    while (getline(Fin, s))
    {
        len=s.size();
        for (i=0; i<len; i++)
        {
            if (s[i]!=' ') k=k+1;
            else
            {
                if (k>m)
                {
                    m=k;
                    id=i-k;
                }
                k=0;
            }
        }
        if (k>m)
        {
            m=k;
            id=len-k;
        }
        s_curr=s.substr(id, m);
        if (s_curr.size() > s_max.size()) s_max=s_curr;
        len=0;
        m=0;
        id=0;
        k=0;
    }
    Fin.close();
    ofstream Fout;
    Fout.open("output.txt");
    Fout<<s_max<<endl;
    Fout.close();
}
