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

        vector<int> a(n), b(n), diff(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            diff[i] = b[i] - a[i];
        }

        ll ans = 0;
        sort(diff.begin(), diff.end());

        int i = 0, j = n - 1;
        while (i < j)
        {
            if (diff[i] + diff[j] >= 0)
            {
                ans++;
                i++;
                j--;
            }
            else
            {
                i++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
