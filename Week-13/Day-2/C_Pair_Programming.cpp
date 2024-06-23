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
        int k, n, m;
        bool ans = true;
        cin >> k >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        int pos1 = 0, pos2 = 0;
        vector<int> res;
        bool ok = true;
        while (pos1 != n || pos2 != m)
        {
            if (pos1 != n && a[pos1] == 0)
            {
                res.push_back(0);
                k++;
                pos1++;
            }
            else if (pos2 != m && b[pos2] == 0)
            {
                res.push_back(0);
                k++;
                pos2++;
            }
            else if (pos1 != n && a[pos1] <= k)
            {
                res.push_back(a[pos1++]);
            }
            else if (pos2 != m && b[pos2] <= k)
            {
                res.push_back(b[pos2++]);
            }
            else
            {
                cout << -1 << '\n';
                ok = false;
                break;
            }
        }

        if (ok)
        {
            for (int cur : res)
                cout << cur << ' ';
            cout << endl;
        }
    }

    return 0;
}
