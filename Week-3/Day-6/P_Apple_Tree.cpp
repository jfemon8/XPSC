#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll dfs(ll src, vector<ll> a[], vector<bool> &vis, vector<ll> &leaf)
{
    ll ans = 0;
    bool flag = true;
    vis[src] = true;
    for (ll child : a[src])
    {
        if (!vis[child])
        {
            ans += dfs(child, a, vis, leaf);
            flag = false;
        }
    }
    if (flag)
    {
        return leaf[src] = 1;
    }
    return leaf[src] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a[n + 1];
        vector<bool> vis(n + 1);
        vector<ll> leaf(n + 1);

        for (int i = 0; i < n - 1; i++)
        {
            ll x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }

        dfs(1, a, vis, leaf);
        ll q;
        cin >> q;
        while (q--)
        {
            ll xx, yy;
            cin >> xx >> yy;
            cout << leaf[xx] * leaf[yy] << '\n';
        }
    }

    return 0;
}
