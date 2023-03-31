#include <iostream>
#include <map>
#include <iterator> //используется в библиотеке STL для обращения к элементам контейнеров
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    string word;
    int count_el;
    map <string, int> words;
    map <string, int>::iterator it;
    ifstream Fin;
    ofstream Fout;
    Fin.open("input.txt");
    while (getline(Fin, word))
    {
        count_el = words.count(word);
        if (count_el >= 1)
        {
            words[word]++;
        }
        else words.insert(make_pair(word, 1));
    }
    Fin.close();
    Fout.open("output.txt");
    for (it = words.begin(); it != words.end(); it++)
    {
        Fout << it -> first << " " << it -> second << endl;
    }
    Fout.close();
    return 0;
}
