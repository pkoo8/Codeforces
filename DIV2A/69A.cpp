#include <bits/stdc++.h>
using namespace std;
struct force
{
    int x;
    int y;
    int z;
};

int main()
{
    int n;
    cin >> n;
    struct force f[n];
    for (int i = 0; i < n; i++)
    {
        cin >> f[i].x >> f[i].y >> f[i].z;
    }
    struct force sum = {0, 0, 0};
    struct force ex = {0, 0, 0};
    for (int i = 0; i < n; i++)
    {
        sum.x += f[i].x;
        sum.y += f[i].y;
        sum.z += f[i].z;
    }
    if (sum.x == 0 && sum.y == 0 && sum.z == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}