#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if (n <= 1)
        return false;

    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (!isprime(sum))
        {
            cout << n << "\n";
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
        }
        else
        {
            int r = 0;
            cout << n - 1 << "\n";
            for (int i = 0; i < n; i++)
            {
                if (!isprime(sum - a[i]))
                {
                    r = i;
                    break;
                }
            }
            for (int i = 1; i <= n; i++)
            {
                if (i != r + 1)
                {
                    cout << i << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}