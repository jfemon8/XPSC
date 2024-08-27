#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

struct node
{
    int l, r, idx;
};

bool cmp(node a, node b)
{
    return a.l < b.l || (a.l == b.l && a.r > b.r);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<node> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].l >> a[i].r;
        a[i].idx = i + 1;
    }
    sort(a.begin(), a.end(), cmp);

    for (int i = 1, j = 0; i < n; i++)
    {
        if (a[i].r <= a[j].r)
        {
            cout << a[i].idx << " " << a[j].idx;
            return 0;
        }
        else
        {
            j = i;
        }
    }
    cout << "-1 -1";

    return 0;
}
