#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>orig = {{1,1,1},{1,1,1},{1,1,1}};
void solve(vector<vector<int>> &grid){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(grid[i][j]==1){
                orig[i][j]=0;
                if(i>1){
                    orig[i-1][j-1]=0;
                    orig[i-1][j]=0;
                    orig[i-1][j+1]=0;
                }
            }
        }
    }
}
void print(vector<vector<int>> &grid)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    vector<vector<int>> grid;
    for (int i = 0; i < 2; i++)
    {
        vector<int> a;
        for (int i = 0; i < 2; i++)
        {
            int x;
            cin >> x;
            a.push_back(x % 2);
        }
        grid.push_back(a);
    }
    solve(grid);
    print(grid);
    return 0;
}