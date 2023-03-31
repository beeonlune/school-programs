#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int main()
{
    const string L="([{<", R=")]}>";
    string str;
    stack <char> s;
    bool err=false;
    int i, p;
    char c;

    cin>>str;

    for (i=0; i<str.size(); i++)
    {
        p=L.find(str[i]);
        if (p>=0) s.push(str[i]);
        p=R.find(str[i]);
        if (p>=0)
        {
            if (s.empty()) err=true;
            else
            {
                c=s.top();
                s.pop();
                if (p!=L.find(c))
                    err=true;
            }
            if (err==true) break;
        }
    }

    if (!s.empty()) err=true;

    if (err==false) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
