#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll N = 1e5 + 5;
vector<ll> arr(N), tr(N * 4);

// Reads two integers and prints their sum
void basicIO(ll n, ll b, ll e)
{
    if (b == e)
    {
        tr[n] = arr[b];
        return;
    }
    ll m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    basicIO(l, b, m);
    basicIO(r, m + 1, e);
    tr[n] = tr[l] + tr[r];
}

void add(ll n, ll b, ll e, ll i, ll v)
{
    if (i < b || i > e)
    {
        return;
    }
    if (b == e)
    {
        tr[n] += v;
        return;
    }
    ll m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    add(l, b, m, i, v);
    add(r, m + 1, e, i, v);
    tr[n] = tr[l] + tr[r];
}

int give(ll n, ll b, ll e, ll i)
{
    if (i < b || i > e)
    {
        return 0;
    }
    if (b == e)
    {
        ll temp = tr[n];
        tr[n] = 0;
        return temp;
    }
    ll m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    ll val1 = give(l, b, m, i);
    ll val2 = give(r, m + 1, e, i);
    tr[n] = tr[l] + tr[r];
    return val1 + val2;
}

ll query(ll n, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
    {
        return 0;
    }
    if (i <= b && j >= e)
    {
        return tr[n];
    }
    ll m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return query(l, b, m, i, j) + query(r, m + 1, e, i, j);
}

int main()
{
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        ll n, q;
        cin >> n >> q;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        basicIO(1, 1, n);
        // Your cpp code here
        cout << "Case " << tt << ":\n";
        while (q--)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                ll idx;
                cin >> idx;
                cout << give(1, 1, n, idx + 1) << '\n';
            }
            else if (x == 2)
            {
                ll idx, val;
                cin >> idx >> val;
                add(1, 1, n, idx + 1, val);
            }
            else
            {
                ll i, j;
                cin >> i >> j;
                cout << query(1, 1, n, i + 1, j + 1) << '\n';
            }
        }
    }
    return 0;
}
