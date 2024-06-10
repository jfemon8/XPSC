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
        vector<int> a[k + 1];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[x].push_back(i);
        }
        vector<int> ans(k + 1);
        int l = n, r = 0;
        for (int i = k; i > 0; i--)
        {
            if (a[i].size() == 0)
            {
                ans[i] = 0;
                continue;
            }
            l = min(l, a[i][0]);
            r = max(r, a[i].back());
            ans[i] = (r - l + 1) * 2;
        }

        for (int i = 1; i <= k; i++)
        {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
