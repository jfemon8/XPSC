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
        int n, x, i;
        cin >> n >> x;
        vector<int> a(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mx = a[0] - 0;
        for (i = 0; i < n - 1; i++)
        {
            mx = max(mx, a[i + 1] - a[i]);
        }
        mx = max(mx, 2 * (x - a[n - 1]));
        cout << mx << '\n';
    }

    return 0;
}
