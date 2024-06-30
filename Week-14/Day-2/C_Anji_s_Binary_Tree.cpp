#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int dfs(int x, string &s, vector<pair<int, int>> &child)
{
    if (child[x].first == 0 && child[x].second == 0)
    {
        return 0;
    }

    int res1 = INT_MAX, res2 = INT_MAX;

    if (child[x].first != 0)
    {
        res1 = dfs(child[x].first, s, child);
        if (s[x - 1] != 'L')
        {
            res1++;
        }
    }

    if (child[x].second != 0)
    {
        res2 = dfs(child[x].second, s, child);
        if (s[x - 1] != 'R')
        {
            res2++;
        }
    }

    return min(res1, res2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        vector<pair<int, int>> child(n + 1);

        for (int i = 1; i <= n; i++)
        {
            int x, y;
            cin >> x >> y;
            child[i] = {x, y};
        }

        cout << dfs(1, s, child) << '\n';
    }

    return 0;
}
