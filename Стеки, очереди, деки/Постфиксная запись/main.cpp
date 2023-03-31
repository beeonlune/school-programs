#include <iostream>
#include <stack>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{  const string L="+-/*";
    string str;
    stack <int> s;
    vector <string> c;
    int p, p1, p2, p3, p4, i, len, a, b, result;

   getline(cin, str);

   while (str.size() > 0)
   {
        p=str.find(' ');
        if (p <0)
            {
                c.push_back(str);
                str.clear();
            }
       else
            {
                if (p > 0)  c.push_back(str.substr(0, p));
                str=str.substr(p+1);
            }
   }
  len=c.size();
  for (i=0; i<len; i++)
  {
     p1 = c[i].size();
     p2 = L.find(c[i]);
     p3 = count(c[i].begin(), c[i].end(), '-');
     p4 = c[i].find('-');
     if (p1==1 && p2>=0)
      {   if (s.size()<2)
          {
            cout<<"ERROR"<<endl;
            return 0;
          }
          b = s.top();
          s.pop();
          a = s.top();
          s.pop();
          if (c[i]=="+")  result = a+b;
          else if (c[i]=="-")  result = a-b;
          else if (c[i]=="*")  result = a*b;
          else if (c[i]=="/" && b != 0)
          { if (a<0 && a%b!=0)
                if (b<0) result = a/b+1;
                else  result = a/b-1;
            else result = a/b;
          }
          else
            {
                cout<<"ERROR"<<endl;
                return 0;
            }
          s.push(result);
      }
      else if (p3<=1 && p4<=0)
      {
          s.push(atoi(c[i].c_str()));
      }
      else
      {
            cout<<"ERROR"<<endl;
            return 0;
      }
  }
  if (s.size() != 1) cout<<"ERROR"<<endl;
  else cout<<s.top()<<endl;
}
