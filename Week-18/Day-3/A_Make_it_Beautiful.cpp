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
        vector<int> ans, cnt(101, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }
        while (ans.size() < n)
        {
            for (int i = 100; i > 0; i--)
            {
                if (cnt[i] > 0)
                {
                    ans.push_back(i);
                    cnt[i]--;
                }
            }
        }
        ll val = ans[0];
        bool ok = true;
        for (int i = 1; i < n; i++)
        {
            if (ans[i] == val)
            {
                ok = false;
                break;
            }
            val += ans[i];
        }
        if (!ok)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
