#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    int ma = *max_element(a.begin(),a.end());
    int mi = *min_element(a.begin(),a.end());
    int i=0,j=1;
    while(a[0]!=ma){
        swap(a[i],a[j]);
        i++;
        j++;
    }

    return 0;
}