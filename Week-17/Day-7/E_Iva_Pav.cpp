#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

const int N = 2e5 + 5;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<int> a(N), tr(4 * N);

void build(int node, int b, int e)
{
    if (b == e)
    {
        tr[node] = a[b];
        return;
    }
    int m = (b + e) / 2, l = 2 * node, r = (2 * node) + 1;
    build(l, b, m);
    build(r, m + 1, e);
    tr[node] = tr[l] & tr[r];
}

int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
    {
        return -1;
    }
    if (b >= i && e <= j)
    {
        return tr[node];
    }
    int m = (b + e) / 2, l = 2 * node, r = (2 * node) + 1;
    return query(l, b, m, i, j) & query(r, m + 1, e, i, j);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        build(1, 1, n);
        cin >> q;
        while (q--)
        {
            int left, k;
            cin >> left >> k;
            int l = left, r = n, right = -1;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                int val = query(1, 1, n, left, mid);
                if (val < k)
                {
                    r = mid - 1;
                }
                else
                {
                    right = mid;
                    l = mid + 1;
                }
            }
            cout << right << " ";
        }
        cout << '\n';
    }

    return 0;
}
