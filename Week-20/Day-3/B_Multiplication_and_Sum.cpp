#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const ll N = 1e5 + 5, mod = 1e9 + 7;
vector<ll> arr(N), t(4 * N), lazy(4 * N);

void push(ll n, ll b, ll e)
{
    if (lazy[n] == 1)
    {
        return;
    }
    t[n] = (lazy[n] * t[n]) % mod;
    if (b != e)
    {
        ll l = 2 * n, r = (2 * n) + 1;
        lazy[l] = (lazy[n] * lazy[l]) % mod;
        lazy[r] = (lazy[n] * lazy[r]) % mod;
    }
    lazy[n] = 1;
}

ll merge(ll a, ll b)
{
    return (a + b) % mod;
}

void build(ll n, ll b, ll e)
{
    lazy[n] = 1;
    if (b == e)
    {
        t[n] = 1;
        return;
    }
    ll m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, m);
    build(r, m + 1, e);
    t[n] = merge(t[l], t[r]);
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
        lazy[n] = v;
        push(n, b, e);
        return;
    }
    ll m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, m, i, j, v);
    update(r, m + 1, e, i, j, v);
    t[n] = merge(t[l], t[r]);
}

ll query(ll n, ll b, ll e, ll i, ll j)
{
    push(n, b, e);
    if (b > j || e < i)
    {
        return 0;
    }
    if (b >= i && e <= j)
    {
        return t[n];
    }
    ll m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return merge(query(l, b, m, i, j), query(r, m + 1, e, i, j));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    build(1, 1, n);
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
            ll i, j;
            cin >> i >> j;
            cout << query(1, 1, n, ++i, j) << '\n';
        }
    }

    return 0;
}
