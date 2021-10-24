#include <bits/stdc++.h>
using namespace std;
long long int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    if (x == 0)
    {
        return 0;
    }
    return x * power(x, y - 1);
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
        int cn0 = 0, cn1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                cn0++;
            if (a[i] == 1)
                cn1++;
        }
        //cout << cn0 << " " << cn1 << endl;
        cout << cn1 * power(2, cn0) << endl;
    }
    return 0;
}