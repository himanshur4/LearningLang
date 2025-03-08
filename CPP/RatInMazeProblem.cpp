#include <bits/stdc++.h>
using namespace std;
bool issafe(int x, int y, int n, vector<vector<int>> m, vector<vector<int>> &visited)
{
    if (x <= n - 1 && y <= n - 1 && visited[x][y] == 0)
        return 1;
    else
        return 0;
}
void solve(int x, int y, int n, vector<vector<int>> m, vector<vector<int>> &visited, string &path, vector<string> &ans)
{
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;
    // down
    int newx = x + 1;
    int newy = y;
    if (issafe(newx, newy, n, m, visited))
    {
        path.push_back('D');
        solve(newx, newy, n, m, visited, path, ans);
        path.pop_back();
    }
    // up
    newx = x - 1;
    newy = y;
    if (issafe(newx, newy, n, m, visited))
    {
        path.push_back('U');
        solve(newx, newy, n, m, visited, path, ans);
        path.pop_back();
    }
    // right
    newx = x;
    newy = y + 1;
    if (issafe(newx, newy, n, m, visited))
    {
        path.push_back('R');
        solve(newx, newy, n, m, visited, path, ans);
        path.pop_back();
    }
    // left
    newx = x;
    newy = y - 1;
    if (issafe(newx, newy, n, m, visited))
    {
        path.push_back('L');
        solve(newx, newy, n, m, visited, path, ans);
        path.pop_back();
    }
    visited[x][y] = 0;
}
int main()
{
    int n, num;
    cout << "Enter the order of square matrix:\n";
    cin >> n;
    vector<vector<int>> m;
    int srcx = 0, srcy = 0;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            temp.push_back(num);
        }
        m.push_back(temp);
        temp.clear();
    }
    vector<string> ans;
    string path = "";
    vector<vector<int>> visited;
    for (int i = 0; i < n; i++)
    {
        vector<int> te;
         for (int j = 0; j < n; j++)
        {
            te.push_back(0);
        }
        visited.push_back(te);
        te.clear();
    }
    solve(srcx, srcy, n, m, visited, path, ans);
    cout << ans[0];
    return 0;
}