#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int N = 2e5 + 5;
int tr[4 * N];

void update(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
    {
        return;
    }
    if (b >= i && e <= j)
    {
        tr[node]++;
        return;
    }
    int m = (b + e) / 2, l = 2 * node, r = (2 * node) + 1;
    update(l, b, m, i, j);
    update(r, m + 1, e, i, j);
}

int query(int node, int b, int e, int i, int c = 0)
{
    if (i > e || i < b)
    {
        return 0;
    }
    if (b == e)
    {
        return tr[node] + c;
    }
    int m = (b + e) / 2, l = 2 * node, r = (2 * node) + 1;
    return query(l, b, m, i, c + tr[node]) + query(r, m + 1, e, i, c + tr[node]);
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
        cin >> n >> q;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        memset(tr, 0, sizeof(tr));
        while (q--)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                int l, r;
                cin >> l >> r;
                update(1, 1, n, l, r);
            }
            else
            {
                int i;
                cin >> i;
                int cnt = query(1, 1, n, i);
                int val = a[i];
                while (cnt-- && val > 9)
                {
                    int temp = 0;
                    while (val > 0)
                    {
                        temp += val % 10;
                        val /= 10;
                    }
                    val = temp;
                }
                cout << val << '\n';
            }
        }
    }

    return 0;
}