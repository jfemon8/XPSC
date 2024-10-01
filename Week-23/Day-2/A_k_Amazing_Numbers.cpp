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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i]--;
        }
        vector<vector<int>> arr(n);
        for (int i = 0; i < n; i++)
        {
            arr[a[i]].push_back(i);
        }
        int inf = 1e9;
        vector<int> ans(n + 1, inf);
        for (int i = 0; i < n; i++)
        {
            if (arr[i].empty())
            {
                continue;
            }
            int mx = arr[i][0];
            for (int j = 0; j < arr[i].size() - 1; j++)
            {
                mx = max(mx, arr[i][j + 1] - arr[i][j] - 1);
            }
            mx = max(mx, n - 1 - arr[i].back());
            ans[mx + 1] = min(ans[mx + 1], i + 1);
        }
        for (int i = 1; i < n; i++)
        {
            ans[i + 1] = min(ans[i], ans[i + 1]);
        }
        for (int i = 1; i <= n; i++)
        {
            cout << (ans[i] == inf ? -1 : ans[i]) << " ";
        }
        cout << '\n';
    }

    return 0;
}