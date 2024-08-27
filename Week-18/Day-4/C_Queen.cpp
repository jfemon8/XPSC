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

    int n;
    cin >> n;
    vector<int> a[n + 1];
    vector<int> p(n + 1), c(n + 1), ans;
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i] >> c[i];
        if (p[i] == -1)
        {
            continue;
        }
        a[p[i]].push_back(i);
    }

    for (int i = 1; i <= n; i++)
    {
        if (c[i] == 1)
        {
            bool ok = true;
            for (int j = 0; j < a[i].size(); j++)
            {
                if (c[a[i][j]] == 0)
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                ans.push_back(i);
            }
        }
    }

    if (ans.empty())
    {
        cout << "-1\n";
        return 0;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
