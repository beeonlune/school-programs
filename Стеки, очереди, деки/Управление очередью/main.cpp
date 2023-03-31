#include <iostream>
#include <queue>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    string symb;
    bool error = false;
    queue <int> numbs;
    ifstream Fin;
    ofstream Fout;
    Fin.open("input.txt");
    while (getline(Fin, symb))
    {
        if (symb[0] == '-')
        {
            if (numbs.size() > 0)
                numbs.pop();
            else
            {
                error = true;
                break;
            }
        }
        else if (symb[0] == '+')
        {
            numbs.push(atoi(symb.substr(1).c_str()));
        }
        else
        {
            error = true;
            break;
        }
    }
    Fin.close();
    Fout.open("output.txt");
    if (error == true) Fout << "ERROR";
    else if (numbs.empty()) Fout << "EMPTY";
    else while (!numbs.empty())
    {
        Fout << numbs.front() << " ";
        numbs.pop();
    }
    Fout << endl;
    Fout.close();
    return 0;
}
