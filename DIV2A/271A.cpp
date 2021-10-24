#include <bits/stdc++.h>
using namespace std;
bool isequal(int n)
{
    int a = n % 10;
    n = n / 10;
    int b = n % 10;
    n = n / 10;
    int c = n % 10;
    n = n / 10;
    int d = n % 10;
    if (a == b or a == c or a == d or b == c or b == d or c == d)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    n++;
    while (isequal(n))
    {
        n++;
    }
    cout << n << endl;
    return 0;
}