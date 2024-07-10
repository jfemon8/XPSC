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
        ll n;
        cin >> n;
        vector<ll> a(n), p(n, 0), q(n, 0);
        vector<pair<ll, ll>> arr(n);
        vector<vector<ll>> mp(n + 1);
        vector<ll> use(n + 1, 0);
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            arr[i] = {a[i], i};
            mp[a[i]].push_back(i);
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            if (arr[i].first < i + 1)
            {
                ans = false;
                break;
            }
        }

        for (int i = n; i > 0; i--)
        {
            if (mp[i].size() > 2)
            {
                ans = false;
                break;
            }
            else if (mp[i].size() == 2)
            {
                p[mp[i][0]] = i;
                q[mp[i][1]] = i;
                use[i] = 2;
            }
            else if (mp[i].size())
            {
                p[mp[i][0]] = i;
                q[mp[i][0]] = i;
                use[i] = 2;
            }
        }

        if (ans)
        {
            cout << "YES\n";

            int idx = 1;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j < mp[i].size(); j++)
                {
                    if (p[mp[i][j]] == 0)
                    {
                        while (use[idx] == 2)
                        {
                            idx++;
                        }
                        p[mp[i][j]] = idx;
                        use[idx]++;
                    }
                    if (q[mp[i][j]] == 0)
                    {
                        while (use[idx] == 2)
                        {
                            idx++;
                        }
                        q[mp[i][j]] = idx;
                        use[idx]++;
                    }
                }
            }

            for (int val : p)
            {
                cout << val << " ";
            }
            cout << '\n';
            for (int val : q)
            {
                cout << val << " ";
            }
            cout << '\n';
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
