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
        int n, m;
        cin >> n >> m;
        vector<int> arr[n + 1];
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            arr[a].push_back(b);
            arr[b].push_back(a);
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i].size() == 1)
            {
                cnt++;
            }
        }
        int x = n - cnt - 1;
        int y = cnt / x;
        cout << x << " " << y << '\n';
    }

    return 0;
}
