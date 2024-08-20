#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

const int N = 1e5 + 5;
const int inf = 1e9 + 9;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<int> a(N);
vector<int> t(4 * N);

void build(int node, int b, int e)
{
    if (b == e)
    {
        t[node] = a[b];
        return;
    }
    int mid = (b + e) / 2, l = 2 * node, r = (2 * node) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[node] = min(t[l], t[r]);
}

void update(int node, int b, int e, int i, int v)
{
    if (i > e || i < b)
    {
        return;
    }
    if (b == e)
    {
        t[node] = v;
        return;
    }
    int mid = (b + e) / 2, l = 2 * node, r = (2 * node) + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[node] = min(t[l], t[r]);
}

int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
    {
        return inf;
    }
    if (i <= b && j >= e)
    {
        return t[node];
    }
    int mid = (b + e) / 2, l = 2 * node, r = (2 * node) + 1;
    return min(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    build(1, 1, n);
    while (m--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int i, v;
            cin >> i >> v;
            update(1, 1, n, i + 1, v);
        }
        else
        {
            int i, j;
            cin >> i >> j;
            cout << query(1, 1, n, i + 1, j) << '\n';
        }
    }

    return 0;
}
