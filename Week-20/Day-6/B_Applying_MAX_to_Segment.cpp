#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const ll N = 1e5 + 5;
vector<ll> arr(N), t(4 * N), lazy(4 * N);

void push(ll n, ll b, ll e)
{
    t[n] = max(t[n], lazy[n]);
    if (b != e)
    {
        ll l = 2 * n, r = (2 * n) + 1;
        lazy[l] = max(lazy[l], lazy[n]);
        lazy[r] = max(lazy[r], lazy[n]);
    }
}

void update(ll n, ll b, ll e, ll i, ll j, ll v)
{
    push(n, b, e);
    if (b > j || e < i)
    {
        return;
    }
    if (b >= i && e <= j)
    {
        lazy[n] = max(lazy[n], v);
        push(n, b, e);
        return;
    }
    ll m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, m, i, j, v);
    update(r, m + 1, e, i, j, v);
}

ll query(ll n, ll b, ll e, ll i)
{
    push(n, b, e);
    if (b > i || e < i)
    {
        return 0;
    }
    if (b >= i && e <= i)
    {
        return t[n];
    }
    ll m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return max(query(l, b, m, i), query(r, m + 1, e, i));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    while (m--)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            ll l, r, v;
            cin >> l >> r >> v;
            update(1, 1, n, ++l, r, v);
        }
        else
        {
            ll i;
            cin >> i;
            cout << query(1, 1, n, ++i) << '\n';
        }
    }

    return 0;
}
