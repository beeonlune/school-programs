#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void sort_down(int A[], int n)
{
    int i, temp, j;
    for (i=1; i<n; i++)
    {
        for (j=0; j<n-i; j++)
        {
            if (A[j]<A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main()
{
    int A[10000];
    string s, name, n, surname, b, s1, t;
    int i=0, d, k=1, p, c;
    ifstream Fin;
    Fin.open("input.txt");
    ofstream Fout;
    Fout.open("output.txt");
    getline(Fin, b);
    d=atoi(b.c_str());
    b.erase(0, b.size());
    while (getline(Fin, s))
    {
        p=s.find(" ");
        s1=s.substr(p+1);
        p=s1.find(" ");
        s1=s1.substr(p+1);
        c=atoi(s1.c_str());
        if (c>d)
        {
            A[i]=c;
            i=i+1;
        }
        else continue;
    }
    Fout<<i<<endl;
    sort_down(A, i);
    i=0;
    while (A[i]>d)
    {
        while (getline(Fin, t))
        {
            p=t.find(" ");
            surname=t.substr(0, p);
            t=t.substr(p+1);
            p=t.find(" ");
            n=t.substr(0, p);
            name=n.substr(0, 1)+".";
            t=t.substr(p+1);
            c=atoi(t.c_str());
            if (c!=A[i]) continue;
            else if (c==A[i])
            {
                Fout<<k<<")"<<" "<<name<<" "<<surname<<" "<<c<<endl;
                k=k+1;
            }
        }
        i=i+1;
    }
    Fout.close();
    Fin.close();
}
