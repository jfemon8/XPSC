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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        ll mn = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn, a[i]);
        }
        if (k >= 3)
        {
            cout << "0\n";
            continue;
        }

        sort(a.begin(), a.end());

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ll d = a[j] - a[i];
                mn = min(mn, d);
                if (k == 2)
                {
                    int idx = (lower_bound(a.begin(), a.end(), d) - a.begin());
                    if (idx < n)
                    {
                        mn = min(mn, abs(a[idx] - d));
                    }
                    idx--;
                    if (idx >= 0)
                    {
                        mn = min(mn, abs(a[idx] - d));
                    }
                }
            }
        }
        cout << mn << '\n';
    }

    return 0;
}
