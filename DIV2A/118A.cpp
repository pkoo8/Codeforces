#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string str;
    for (int i = 0; i < n; i++)
    {
        char x = s[i];
        if (x == 'a' || x == 'o' || x == 'y' || x == 'e' || x == 'u' || x == 'i')
        {
            continue;
        }
        else
        {
            str += '.';
            str += x;
        }
    }
    cout << str << endl;
    return 0;
}