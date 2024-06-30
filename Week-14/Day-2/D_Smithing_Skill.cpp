#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

map<ll, ll> dp;

ll findValue(ll x, vector<pair<ll, ll>> &a)
{
    if (dp[x] != 0)
    {
        return dp[x];
    }

    ll l = 0, r = a.size() - 1, idx = -1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (a[mid].second > x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
            idx = mid;
        }
    }

    if (idx == -1)
    {
        return dp[x] = 0;
    }
    ll op = ((x - a[idx].second) / a[idx].first) + 1;
    ll rem = x - (op * a[idx].first);
    return dp[x] = op + findValue(rem, a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(n), c(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<pair<ll, ll>> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        vec[i] = {(a[i] - b[i]), a[i]};
    }
    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
    }

    sort(vec.begin(), vec.end());
    sort(c.rbegin(), c.rend());
    vector<pair<ll, ll>> all;
    for (int i = 0; i < n; i++)
    {
        if (all.empty())
        {
            all.push_back(vec[i]);
            continue;
        }
        auto temp1 = all.back();
        auto temp2 = vec[i];
        if (temp2.second < temp1.second)
        {
            all.push_back(vec[i]);
        }
    }

    ll ans = 0;
    for (int i = 0; i < m; i++)
    {
        ans += findValue(c[i], all) * 2;
    }

    cout << ans;

    return 0;
}
