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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n + m + 1), b(n + m + 1), ans(n + m + 1), pick(n + m + 1);
        vector<ll> pro, tes;
        for (int i = 0; i <= n + m; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i <= n + m; i++)
        {
            cin >> b[i];
        }
        ll x = 0, y = 0, sum = 0;
        for (int i = 0; i < n + m; i++)
        {
            if (x < n && a[i] > b[i])
            {
                sum += a[i];
                x++;
                pick[i] = 1;
            }
            else if (y < m && b[i] > a[i])
            {
                sum += b[i];
                y++;
                pick[i] = 2;
            }
            else if (x < n)
            {
                sum += a[i];
                x++;
                pick[i] = 1;
                if (b[i] > a[i])
                {
                    tes.push_back(i);
                }
            }
            else if (y < m)
            {
                sum += b[i];
                y++;
                pick[i] = 2;
                if (b[i] < a[i])
                {
                    pro.push_back(i);
                }
            }
        }

        ans[n + m] = sum;

        for (int i = 0; i < n + m; i++)
        {
            ll res = sum;
            if (pick[i] == 1)
            {
                res -= a[i];
                if (!pro.empty() && pro[0] != i)
                {
                    res -= b[pro[0]];
                    res += a[pro[0]];
                    res += b[n + m];
                }
                else
                {
                    res += a[n + m];
                }
            }
            else if (pick[i] == 2)
            {
                res -= b[i];
                if (!tes.empty() && tes[0] != i)
                {
                    res -= a[tes[0]];
                    res += b[tes[0]];
                    res += a[n + m];
                }
                else
                {
                    res += b[n + m];
                }
            }
            ans[i] = res;
        }

        for (ll val : ans)
        {
            cout << val << " ";
        }
        cout << '\n';
    }

    return 0;
}
