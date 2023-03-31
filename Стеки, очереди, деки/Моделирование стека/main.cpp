#include <iostream>
#include <stack>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    string symbols;
    int i;
    bool error = false;
    ifstream Fin;
    ofstream Fout;
    stack <int> numbs;
    vector <int> A;
    Fin.open("input.txt");
    while (getline(Fin, symbols))
    {
        if (symbols[0] == '-')
        {
            if (numbs.size() > 0)
                numbs.pop();
            else
            {
                error = true;
                break;
            }
        }
        else if (symbols[0] == '+')
        {
            numbs.push(atoi(symbols.substr(1).c_str()));
        }
        else
        {
            error = true;
            break;
        }
    }
    Fin.close();
    Fout.open("output.txt");
    if (error == true)
        Fout << "ERROR" << endl;
    else
    {
        if (numbs.empty())
            Fout << "EMPTY" << endl;
        else
        {
            while (!numbs.empty())
            {
                A.push_back(numbs.top());
                numbs.pop();
            }
            for (i = A.size() - 1; i >= 0; i--)
            {
                Fout << A[i] << " ";
            }
            Fout << endl;
        }
    }
    Fout.close();
    return 0;
}
