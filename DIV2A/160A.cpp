#include <bits/stdc++.h>
using namespace std;
int main()
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
    int count, j;
    int curr = 0;
    count = j = 0;
    sort(a, a + n, greater<int>());
    for (j = 0; j < n; j++)
    {
        curr += a[j];
        count++;
        if (curr > sum - curr)
        {
            cout << count << endl;
            break;
        }
    }
    return 0;
}