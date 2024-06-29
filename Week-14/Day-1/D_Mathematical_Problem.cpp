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
        int n;
        string s;
        cin >> n >> s;
        int idx = 0;
        ll ans = LLONG_MAX;
        vector<int> a(n - 1);

        for (int i = 1; i < n; i++)
        {
            a[i - 1] = s[i] - '0';
        }
        a[0] += (s[0] - '0') * 10;

        while (idx < n - 1)
        {
            ll res = a[0];
            for (int i = 1; i < n - 1; i++)
            {
                if (a[i] == 1 || a[i] == 0 || res == 0 || res == 1)
                {
                    res *= a[i];
                }
                else
                {
                    res += a[i];
                }
            }
            ans = min(ans, res);
            if (idx != n - 2)
            {
                int rem = a[idx] % 10;
                a[idx] /= 10;
                a[idx + 1] += rem * 10;
            }
            idx++;
        }
        cout << ans << '\n';
    }

    return 0;
}
