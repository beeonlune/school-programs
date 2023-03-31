#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    int n = 0, i, num;
    string a;
    vector <int> A;
    ifstream Fin;
    ofstream Fout;
    Fin.open("input.txt");
    while(getline(Fin, a))
    {
        num = atoi(a.c_str());
        if (num != 0)
        {
            A.push_back(num);
            n++;
        }
        else break;
    }
    Fin.close();
    for (i = 0; i < n / 2; i++)
    {
        A[i] = A[i] + A[n - i - 1];
        A.pop_back();
    }
    Fout.open("output.txt");
    for (i = 0;  i < n / 2; i++)
        Fout << A[i] << endl;
    if (n % 2 != 0)
        Fout << A[n / 2] << endl;
    Fout.close();
    return 0;
}
