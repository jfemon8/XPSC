#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, k, sum = 0;
        cin >> n >> m >> k;
        vector<ll> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a[0] < b.back())
        {
            swap(a[0], b[m - 1]);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (k % 2 == 0)
        {
            if (b[0] < a.back())
            {
                swap(b[0], a[n - 1]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        cout << sum << '\n';
    }

    return 0;
}
