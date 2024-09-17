#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int N = 1e5 + 5;
vector<int> tr(4 * N);
string s;
int ans;

void push(int n, int b, int e)
{
    if (b == e)
    {
        return;
    }
    int l = 2 * n, r = (2 * n) + 1;
    tr[l] ^= tr[n];
    tr[r] ^= tr[n];
    tr[n] = 0;
}

void build(int n, int b, int e)
{
    if (b == e)
    {
        tr[n] = s[b] - '0';
        return;
    }
    int m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, m);
    build(r, m + 1, e);
    tr[n] = 0;
}

void update(int n, int b, int e, int i, int j)
{
    push(n, b, e);
    if (b > j || e < i)
    {
        return;
    }
    if (b >= i && e <= j)
    {
        tr[n] ^= 1;
        push(n, b, e);
        return;
    }
    int m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, m, i, j);
    update(r, m + 1, e, i, j);
}

void query(int n, int b, int e, int i)
{
    push(n, b, e);
    if (b > i || e < i)
    {
        return;
    }
    if (b >= i && e <= i)
    {
        ans = tr[n];
        return;
    }
    int m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    query(l, b, m, i);
    query(r, m + 1, e, i);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":\n";
        int m;
        cin >> s >> m;
        s = "#" + s;
        int n = s.size() - 1;
        build(1, 1, n);
        while (m--)
        {
            char x;
            cin >> x;
            if (x == 'I')
            {
                int i, j;
                cin >> i >> j;
                update(1, 1, n, i, j);
            }
            else
            {
                int i;
                cin >> i;
                query(1, 1, n, i);
                cout << ans << '\n';
            }
        }
    }

    return 0;
}
