#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }
    vector<int> gifts(n + 1, -1);
    for (int i = 1; i < n + 1; i++)
    {
        gifts[a[i]] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << gifts[i] << " ";
    }
    return 0;
}