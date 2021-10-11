#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int n = s1.length();
    int i = 0;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (s1[i] > s2[i])
        {
            cout << 1 << endl;
            break;
        }
        else if (s1[i] < s2[i])
        {
            cout << -1 << endl;
            break;
        }
        else
        {
            count++;
        }
    }
    //cout << s1 << " " << s2 << endl;
    if (count == n)
    {
        //cout << s1[i] << s2[i] << endl;
        cout << 0 << endl;
    }
    return 0;
}