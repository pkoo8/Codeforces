#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        int maxi = max(a[0], max(a[1], a[2]));
        if (maxi == 0)
        {
            cout << "1 1 1";
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                if (a[i] < maxi)
                {
                    a[i] = maxi - a[i] + 1;
                }
                else
                {
                    a[i] = 0;
                }
            }

            for (int i = 0; i < 3; i++)
            {
                cout << a[i] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}