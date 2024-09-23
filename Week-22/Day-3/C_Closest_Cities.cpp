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
        int n, m;
        cin >> n;
        vector<ll> a(n + 1), suff(n + 1), pref(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        pref[2] = 1;
        for (int i = 2; i < n; i++)
        {
            if (abs(a[i] - a[i + 1]) < abs(a[i] - a[i - 1]))
            {
                pref[i + 1] = 1;
            }
            else
            {
                pref[i + 1] = abs(a[i] - a[i + 1]);
            }
        }
        suff[n - 1] = 1;
        for (int i = n - 1; i > 1; i--)
        {
            if (abs(a[i] - a[i + 1]) > abs(a[i] - a[i - 1]))
            {
                suff[i - 1] = 1;
            }
            else
            {
                suff[i - 1] = abs(a[i] - a[i - 1]);
            }
        }
        for (int i = 1; i <= n; i++)
        {
            pref[i] += pref[i - 1];
        }
        for (int i = n - 1; i > 0; i--)
        {
            suff[i] += suff[i + 1];
        }
        cin >> m;
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            if (x < y)
            {
                cout << pref[y] - pref[x] << '\n';
            }
            else
            {
                cout << suff[y] - suff[x] << '\n';
            }
        }
    }

    return 0;
}
