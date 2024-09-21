#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const ll N = 2e5 + 5;
vector<ll> arr[N];
vector<bool> vis(N, false);
string s;
vector<ll> a(N), ans(N);

ll dfs(ll idx, ll tmp)
{
    if (vis[idx])
    {
        return 0;
    }
    arr[tmp].push_back(idx);
    vis[idx] = true;
    ll total = ((s[idx] - '0') ^ 1) + dfs(a[idx], tmp);
    return total;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        a.clear();
        ans.clear();
        s.clear();
        for (int i = 0; i <= n; i++)
        {
            arr[i].clear();
            vis[i] = false;
        }

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        cin >> s;
        s = "#" + s;
        ll tmp = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                ans[tmp] = dfs(i, tmp);
                tmp++;
            }
        }
        vector<ll> res(n + 1);
        for (int i = 0; !arr[i].empty(); i++)
        {
            for (int j = 0; j < arr[i].size(); j++)
            {
                res[arr[i][j]] = ans[i];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << res[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}