#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const ll N = 1 << 18;
vector<ll> a(N), t(4 * N);

void build(ll n, ll b, ll e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }
    ll m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, m);
    build(r, m + 1, e);
    ll x = log2(e - b + 1);
    if (x % 2)
    {
        t[n] = t[l] | t[r];
    }
    else
    {
        t[n] = t[l] ^ t[r];
    }
}

void update(ll n, ll b, ll e, ll i, ll v)
{
    if (b > i || e < i)
    {
        return;
    }
    if (b == e)
    {
        t[n] = v;
        return;
    }
    ll m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, m, i, v);
    update(r, m + 1, e, i, v);
    ll x = log2(e - b + 1);
    if (x % 2)
    {
        t[n] = t[l] | t[r];
    }
    else
    {
        t[n] = t[l] ^ t[r];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll x = 1 << n;
    for (ll i = 1; i <= x; i++)
    {
        cin >> a[i];
    }
    build(1, 1, x);
    while (m--)
    {
        ll a, b;
        cin >> a >> b;
        update(1, 1, x, a, b);
        cout << t[1] << '\n';
    }

    return 0;
}
