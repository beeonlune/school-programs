#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
    int n, num, i;
    vector <int> A;
    ifstream Fin;
    ofstream Fout;
    Fin.open("input.txt");
    Fin >> n;
    for (i = 0; i < n; i++)
    {
        Fin >> num;
        A.push_back(num);
    }
    sort(A.begin(), A.end());
    Fin.close();
    Fout.open("output.txt");
    for (i = 0; i < n; i++)
        Fout << A[i] << " ";
    Fout << endl;
}
