#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

bool vis[1001][1001];
int n;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool valid(int x, int y)
{
    return x > 0 && y > 0 && x <= n && y <= n;
}

void dfs(int x, int y)
{
    vis[x][y] = true;
    if (valid(x + 1, y + 1) && !vis[x + 1][y + 1])
    {
        dfs(x + 1, y + 1);
    }
    if (valid(x + 1, y - 1) && !vis[x + 1][y - 1])
    {
        dfs(x + 1, y - 1);
    }
    if (valid(x - 1, y + 1) && !vis[x - 1][y + 1])
    {
        dfs(x - 1, y + 1);
    }
    if (valid(x - 1, y - 1) && !vis[x - 1][y - 1])
    {
        dfs(x - 1, y - 1);
    }
    if (valid(x, y + 1) && !vis[x][y + 1])
    {
        dfs(x, y + 1);
    }
    if (valid(x, y - 1) && !vis[x][y - 1])
    {
        dfs(x, y - 1);
    }
    if (valid(x + 1, y) && !vis[x + 1][y])
    {
        dfs(x + 1, y);
    }
    if (valid(x - 1, y) && !vis[x - 1][y])
    {
        dfs(x - 1, y);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    int a, b;
    cin >> a >> b;
    memset(vis, false, sizeof(vis));
    for (int i = 1; i <= n; i++)
    {
        vis[a][i] = true;
        vis[i][b] = true;
    }
    int r = a, c = b;
    while (r <= n && c <= n)
    {
        vis[r++][c++] = true;
    }
    r = a, c = b;
    while (r <= n && c > 0)
    {
        vis[r++][c--] = true;
    }
    r = a, c = b;
    while (r > 0 && c <= n)
    {
        vis[r--][c++] = true;
    }
    r = a, c = b;
    while (r > 0 && c > 0)
    {
        vis[r--][c--] = true;
    }

    int x, y;
    cin >> x >> y;
    dfs(x, y);

    int u, v;
    cin >> u >> v;
    if (vis[u][v])
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}