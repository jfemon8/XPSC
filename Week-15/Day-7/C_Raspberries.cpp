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
        vector<int> a(n);
        int ans = k + 1, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even++;
            }
            int m = (k - (a[i] % k)) % k;
            ans = min(ans, m);
        }
        if (k == 4)
        {
            if (even >= 2)
            {
                ans = min(ans, 0);
            }
            else if (even == 1)
            {
                ans = min(ans, 1);
            }
            else
            {
                ans = min(ans, 2);
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
