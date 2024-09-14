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
    if (lazy[n] == 0)
    {
        return;
    }
    t[n] |= lazy[n];
    if (b != e)
    {
        ll l = 2 * n, r = (2 * n) + 1;
        lazy[l] |= lazy[n];
        lazy[r] |= lazy[n];
    }
    lazy[n] = 0;
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
    t[n] = t[l] & t[r];
}

ll query(ll n, ll b, ll e, ll i, ll j)
{
    push(n, b, e);
    if (b > j || e < i)
    {
        return -1;
    }
    if (b >= i && e <= j)
    {
        return t[n];
    }
    ll m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return (query(l, b, m, i, j) & query(r, m + 1, e, i, j));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    while (m--)
    {
        int x;
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
