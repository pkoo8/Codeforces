#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> v;
    int n = s.length();
    string str;

    for (int i = 0; i < n; i++)
    {

        if (s[i] != '+')
        {
            v.push_back(s[i] - 48);
        }
    }
    sort(v.begin(), v.end());
    int num = v.size();
    for (int i = 0; i < num; i++)
    {
        if(i<num-1)cout << v[i] << '+';
        else cout << v[i];
    }
    return 0;
}