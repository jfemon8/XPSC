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
        int n, k;
        cin >> n >> k;
        vector<int> a(n * k);
        for (int i = 0; i < n * k; i++)
        {
            cin >> a[i];
        }
        int temp = ceil((n * 1.0) / 2) - 1;
        int idx = temp * k, rem = n - temp;
        ll ans = 0;
        for (int i = idx; i < n * k; i += rem)
        {
            ans += a[i];
        }
        cout << ans << '\n';
    }

    return 0;
}
