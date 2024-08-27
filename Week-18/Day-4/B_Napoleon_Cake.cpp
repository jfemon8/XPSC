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
        vector<int> ans(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            if (val > 0)
            {
                int x = max(i - val + 1, 1);
                ans[x]++;
                if (i + 1 <= n)
                {
                    ans[i + 1]--;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            ans[i] += ans[i - 1];
        }

        for (int i = 1; i <= n; i++)
        {
            if (ans[i] > 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << '\n';
    }

    return 0;
}
