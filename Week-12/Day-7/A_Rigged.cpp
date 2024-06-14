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
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            a[i] = {x, y};
        }
        int ans = a[0].first;
        int str = a[0].second;
        for (int i = 1; i < n; i++)
        {
            if (a[i].first >= ans && a[i].second >= str)
            {
                ans = -1;
                break;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
