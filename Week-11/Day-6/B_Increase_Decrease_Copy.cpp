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
        cin >> n;
        vector<int> a(n), b(n + 1);
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i <= n; i++)
        {
            cin >> b[i];
            if (i < n)
            {
                ans += abs(a[i] - b[i]);
            }
        }

        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if (b[n] <= max(a[i], b[i]) && b[n] >= min(a[i], b[i]))
            {
                ok = true;
                break;
            }
        }
        if (!ok)
        {
            int val = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                int x = min(abs(a[i] - b[n]), abs(b[i] - b[n]));
                val = min(val, x);
            }
            ans += val;
        }
        cout << ++ans << '\n';
    }

    return 0;
}