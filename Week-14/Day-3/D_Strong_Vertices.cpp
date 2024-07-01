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
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        ll maxi = LLONG_MIN, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            a[i] -= b[i];
            maxi = max(maxi, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == maxi)
            {
                ans++;
            }
        }
        cout << ans << '\n';
        for (int i = 0; i < n; i++)
        {
            if (a[i] == maxi)
            {
                cout << i + 1 << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}
