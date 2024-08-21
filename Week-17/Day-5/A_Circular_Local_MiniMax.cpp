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
        }
        sort(a.begin(), a.end());
        vector<int> ans(n);
        int idx = 0;
        for (int i = 0; i < n; i += 2)
        {
            ans[i] = a[idx++];
        }
        for (int i = 1; i < n; i += 2)
        {
            ans[i] = a[idx++];
        }

        bool ok = true;
        if (n % 2)
        {
            ok = false;
        }
        for (int i = 0; i < n; i++)
        {
            if (ans[i] == ans[(i + 1) % n])
            {
                ok = false;
            }
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
