#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, H;
        cin >> n >> H;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int w1 = a[n - 1];
        int w2 = a[n - 2];
        int x = w1 + w2;
        int ans = H / x;
        if (H % x == 0)
        {
            cout << 2 * ans << endl;
        }
        else if (H % x <= w1)
        {
            cout << 2 * ans + 1 << endl;
        }
        else
        {
            cout << 2 * ans + 2 << endl;
        }
    }
    return 0;
}
