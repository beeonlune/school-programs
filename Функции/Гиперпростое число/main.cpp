#include <iostream>

using namespace std;

int simple (int n)
{
    int c=0, k=2;
    while (k*k<=n && c==0)
    {
        if (n%k==0) c++;
        k++;
    }
    return (c==0);
}
 int verysimple (int n)
 {
     bool yes=true;
     if (simple(n))
     {
         while (n>0)
         {
             n=n/10;
             if (simple(n)==false) yes=false;
         }
     }
     else yes=false;
     if (yes==true) return true;
     if (yes==false) return false;
 }

 int main()
 {
     int n;
     cin>>n;
     if (verysimple(n)) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
 }
