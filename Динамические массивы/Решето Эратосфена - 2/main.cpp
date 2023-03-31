#include <iostream>
#include <vector>

using namespace std;

bool isPrime (int n)
{
    int k = 2, count_el = 0;
    while (k * k <= n && count_el == 0)
    {
        if (n % k == 0)
            count_el++;
        k++;
    }
    return(count_el == 0);
}

int main()
{
    int n, i, k = 0;
    cin >> n;
    vector <int> A;
    //int *A = new int [n];
    for (i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            A.push_back(i);
            k++;
        }
    }
    for (i = 0; i < k; i++)
        cout << A[i] << " ";
    cout << endl;
    //delete [] A;
}
