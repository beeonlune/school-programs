#include <iostream>
#include <fstream>

using namespace std;

void replaceAll(string &s, string wOld, string wNew)
{
    string res="";
    int p, len=wOld.size()+1;
    while (s.size()>0)
    {
        p=s.find(' '+wOld);
        if (p<0)
        {
            while (s.size()>0)
            {
               p=s.find(wOld+' ');
               if (p<0)
                 {
                     res=res+s;
                     break;
                 }
                 if (p>0)
                 {
                     res=res+s.substr(0, p);
                 }
                 res=res+ " " +wNew;
                 if (p+len>s.size()) s="";
                 else s.erase(0, p+len);
             }
            break;
        }
        if (p>0)
        {
            res=res+s.substr(0, p);
        }
        res=res+ " " +wNew;
        if (p+len>s.size()) s="";
        else s.erase(0, p+len);
    }

    s=res;
}

int main()
{
    string s, s1, s2;
    ifstream Fin;
    Fin.open("input.txt");
    getline(Fin, s1);
    if (s1[s1.size()-1]=='.' || s1[s1.size()-1]==',' || s1[s1.size()-1]==':' || s1[s1.size()-1]==';' || s1[s1.size()-1]=='!' || s1[s1.size()-1]=='?') s1=s1.substr(0, s.size()-1);
    getline(Fin, s2);
    if (s2[s2.size()-1]=='.' || s2[s2.size()-1]==',' || s2[s2.size()-1]==':' || s2[s2.size()-1]==';' || s2[s2.size()-1]=='!' || s2[s2.size()-1]=='?') s2=s2.substr(0, s.size()-1);
    getline(Fin, s);
    replaceAll(s, s1, s2);
    Fin.close();
    ofstream Fout;
    Fout.open("output.txt");
    Fout<<s<<endl;
    Fout.close();
}
