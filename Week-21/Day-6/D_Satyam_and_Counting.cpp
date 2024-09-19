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
        ll n;
        cin >> n;

        vector<vector<ll>> a(n + 1);
        vector<ll> cnt(n + 1, 0);

        for (ll i = 1; i <= n; i++)
        {
            ll x, y;
            cin >> x >> y;
            if (x <= n)
            {
                a[x].push_back(y);
                cnt[x]++;
            }
        }

        for (ll i = 1; i <= n; i++)
        {
            cnt[i] += cnt[i - 1];
        }

        ll ans = 0;
        for (ll i = 0; i <= n; i++)
        {
            if (a[i].empty())
            {
                continue;
            }
            else if (a[i].size() == 2)
            {
                ans += cnt[n] - cnt[i];
                if (i > 0)
                {
                    ans += cnt[i - 1];
                }
            }

            if (i > 0 && i < n)
            {
                for (ll j = 0; j < a[i].size(); j++)
                {
                    bool ok1 = false, ok2 = false;

                    for (ll k = 0; k < a[i - 1].size(); k++)
                    {
                        if (a[i - 1][k] != a[i][j])
                        {
                            ok1 = true;
                            break;
                        }
                    }

                    for (ll k = 0; k < a[i + 1].size(); k++)
                    {
                        if (a[i + 1][k] != a[i][j])
                        {
                            ok2 = true;
                            break;
                        }
                    }

                    if (ok1 && ok2)
                    {
                        ans++;
                    }
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}