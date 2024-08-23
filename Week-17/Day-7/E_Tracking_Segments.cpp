#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<int> tr(4 * 1e5 + 5);

void build(int node, int b, int e)
{
    if (b == e)
    {
        tr[node] = 0;
        return;
    }
    int mid = (b + e) / 2, l = 2 * node, r = (2 * node) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    tr[node] = tr[l] + tr[r];
}

void update(int node, int b, int e, int i)
{
    if (i < b || i > e)
    {
        return;
    }
    if (b == e)
    {
        tr[node] = 1;
        return;
    }
    int mid = (b + e) / 2, l = 2 * node, r = (2 * node) + 1;
    update(l, b, mid, i);
    update(r, mid + 1, e, i);
    tr[node] = tr[l] + tr[r];
}

int query(int node, int b, int e, int i, int j)
{
    if (j < b || i > e)
    {
        return 0;
    }
    if (b >= i && e <= j)
    {
        return tr[node];
    }
    int mid = (b + e) / 2, l = 2 * node, r = (2 * node) + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m;
        vector<pair<int, int>> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        cin >> q;
        vector<int> queries(q);
        for (int i = 0; i < q; i++)
        {
            cin >> queries[i];
        }

        auto ok = [&](int mid)
        {
            build(1, 1, n);
            bool found = false;
            for (int i = 0; i <= mid; i++)
            {
                update(1, 1, n, queries[i]);
            }

            for (int i = 0; i < m; i++)
            {
                int left = a[i].first, right = a[i].second;
                int one = query(1, 1, n, left, right);
                int zero = (right - left + 1) - one;
                if (one > zero)
                {
                    found = true;
                    break;
                }
            }
            return found;
        };

        int l = 0, r = q - 1, ans = -2;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans + 1 << '\n';
    }

    return 0;
}
