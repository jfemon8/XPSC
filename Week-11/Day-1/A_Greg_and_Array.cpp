#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<tuple<ll, ll, ll>> op(m + 1);
    for (ll i = 1; i <= m; i++)
    {
        ll l, r, d;
        cin >> l >> r >> d;
        op[i] = make_tuple(l, r, d);
    }
    vector<ll> totalOp(m + 2, 0);
    while (k--)
    {
        ll x, y;
        cin >> x >> y;
        totalOp[x] += 1;
        totalOp[y + 1] -= 1;
    }
    for (ll i = 1; i <= m; i++)
    {
        totalOp[i] += totalOp[i - 1];
    }
    vector<ll> diff(n + 2, 0);
    for (ll i = 1; i <= m; i++)
    {
        ll l, r, d;
        tie(l, r, d) = op[i];
        diff[l] += 1LL * d * totalOp[i];
        diff[r + 1] -= 1LL * d * totalOp[i];
    }
    for (ll i = 1; i <= n + 1; i++)
    {
        diff[i] += diff[i - 1];
    }
    for (ll i = 1; i <= n; i++)
    {
        a[i] += diff[i];
    }
    for (ll i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
