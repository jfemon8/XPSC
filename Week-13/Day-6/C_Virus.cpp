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
        ll n, m;
        cin >> n >> m;
        vector<ll> a(m), diff(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        diff[0] = a[0] - 1;
        for (int i = 1; i < m; i++)
        {
            diff[i] = a[i] - a[i - 1] - 1;
        }
        diff[0] += (n - a[m - 1]);

        sort(diff.rbegin(), diff.rend());
        ll ans = 0, ef = 0;
        for (int i = 0; i < m; i++)
        {
            if (diff[i] - 1 > ef)
            {
                ans += (diff[i] - ef - 1);
            }
            else if (diff[i] - 1 == ef)
            {
                ans++;
            }
            ef += 4;
        }

        cout << n - ans << '\n';
    }

    return 0;
}
