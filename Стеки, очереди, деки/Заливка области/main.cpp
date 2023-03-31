#include <iostream>
#include <queue>
#include <fstream>
#include <sstream>

using namespace std;

typedef struct
    {
        int x, y;
    } TPoint;

TPoint Point (int x, int y){
        TPoint P;
        P.x=x;
        P.y=y;
        return P;
    }

int main()
{
    int n, m, x0, y0, color, i, j, new_color, num=0;
    int A[100][100];
    queue <TPoint> Q;
    TPoint pt;
    string s, s0, s1;
    ifstream Fin;
    ofstream Fout;

    Fin.open("input.txt");

    Fin>>n;
    Fin>>m;
    Fin>>x0;
    Fin>>y0;
    Fin>>new_color;

    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            Fin>>A[i][j];
        }
    }

    Fin.close();


    color=A[y0][x0];
    if (color==new_color)
    {
        num=0;

        Fout.open("output.txt");

        Fout<<num<<endl;

        for (i=0; i<n; i++)
        {
            for (j=0; j<m; j++)
            {
                Fout<<A[i][j]<<" ";
            }
            Fout<<endl;
        }

        Fout.close();
    }
    else
    {
        Q.push(Point(x0, y0));

        while (!Q.empty())
        {
            pt=Q.front();
            Q.pop();
            if (A[pt.y][pt.x]==color)
            {
                A[pt.y][pt.x]=new_color;
                if (pt.x>0) Q.push(Point(pt.x-1, pt.y));
                if (pt.y>0) Q.push(Point(pt.x, pt.y-1));
                if (pt.x<m-1) Q.push(Point(pt.x+1, pt.y));
                if (pt.y<n-1) Q.push(Point(pt.x, pt.y+1));
                num=num+1;
            }
        }

        Fout.open("output.txt");

        Fout<<num<<endl;
        for (i=0; i<n; i++)
        {
            for (j=0; j<m; j++)
            {
                Fout<<A[i][j]<<" ";
            }
            Fout<<endl;
        }
    }
}
