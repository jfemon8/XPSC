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
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int unm = 0;
        map<int, int> mp, cnt;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] != a[i])
            {
                unm++;
                mp[b[i]]++;
            }
        }
        cin >> m;
        vector<int> d(m);
        for (int i = 0; i < m; i++)
        {
            cin >> d[i];
            cnt[d[i]]++;
        }

        sort(b.begin(), b.end());

        if (unm == 0)
        {
            if (binary_search(b.begin(), b.end(), d[m - 1]))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {

            bool ans = true;
            for (auto [x, y] : mp)
            {
                if (y > cnt[x])
                {
                    ans = false;
                    break;
                }
            }
            if (!ans)
            {
                cout << "NO\n";
            }
            else
            {
                if (binary_search(b.begin(), b.end(), d[m - 1]))
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }

    return 0;
}