#include <bits/stdc++.h>
using namespace std;
int sum(int a[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    string s;
    cin >> s;
    int a[5];
    int n = s.length();
    string t = "hello";
    int j = 0;
    for(int i=0;i<n;i++){
        if(s[i]==t[j]){
            j++;
        }
    }
    if(j==5){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}

int mysolution()
{
    int a[5];
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'h')
        {
            if (sum(a) == 0)
            {
                a[0]++;
            }
        }
        else if (s[i] == 'e')
        {
            if (sum(a) == 1)
            {
                a[1]++;
            }
        }
        else if (s[i] == 'l')
        {
            if (sum(a) == 2)
            {
                a[2]++;
            }
            else if (sum(a) == 3)
            {
                a[3]++;
            }
        }
        else if (s[i] == 'o')
        {
            if (sum(a) == 4)
            {
                a[4]++;
            }
        }
        else
        {
            if (sum(a) == 5)
            {
                cout << "YES" << endl;
                break;
            }
        }
    }
    return 0;
}