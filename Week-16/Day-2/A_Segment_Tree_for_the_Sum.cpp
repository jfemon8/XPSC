#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

ll N = 1e5 + 5;
vector<ll> arr(N), tr(4 * N);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void build(ll node, ll start, ll end)
{
    if (start == end)
    {
        tr[node] = arr[start];
        return;
    }
    ll mid = (start + end) / 2, left = 2 * node, right = (2 * node) + 1;
    build(left, start, mid);
    build(right, mid + 1, end);
    tr[node] = tr[left] + tr[right];
}

void update(ll node, ll start, ll end, ll index, ll val)
{
    if (index < start || index > end)
    {
        return;
    }
    if (start == end)
    {
        tr[node] = val;
        return;
    }
    ll mid = (start + end) / 2, left = 2 * node, right = (2 * node) + 1;
    update(left, start, mid, index, val);
    update(right, mid + 1, end, index, val);
    tr[node] = tr[left] + tr[right];
}

ll query(ll node, ll start, ll end, ll l, ll r)
{
    if (l > end || r < start)
    {
        return 0;
    }
    if (l <= start && r >= end)
    {
        return tr[node];
    }
    ll mid = (start + end) / 2, left = 2 * node, right = (2 * node) + 1;
    return query(left, start, mid, l, r) + query(right, mid + 1, end, l, r);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    build(1, 1, n);
    while (m--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            ll i, v;
            cin >> i >> v;
            update(1, 1, n, i + 1, v);
        }
        else
        {
            ll l, r;
            cin >> l >> r;
            cout << query(1, 1, n, l + 1, r) << '\n';
        }
    }

    return 0;
}
