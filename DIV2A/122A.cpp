#include <bits/stdc++.h>
using namespace std;
bool islucky(int n)
{
    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        if (rem != 4 && rem != 7)
        {
            return false;
        }
    }
    return true;
}
bool solve(int n)
{
    if (n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 47 == 0 || n % 74 == 0 || n % 77 == 0)
    {
        return true;
    }
    for (int i = 444; i <= n; i++)
    {
        //cout << i << "\n";
        //cout << islucky(i) << endl;
        if (islucky(i))
        {
            if (n % i == 0)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    bool ans = solve(n);
    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}