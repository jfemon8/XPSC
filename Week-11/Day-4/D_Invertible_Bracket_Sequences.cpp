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
        string s;
        cin >> s;
        ll n = s.size();
        vector<ll> a(n + 1);
        for (ll i = 0; i < n; i++)
        {
            a[i + 1] = a[i] + (s[i] == '(' ? 1 : -1);
        }
        vector<vector<ll>> vec(n / 2 + 1);
        for (ll i = 0; i <= n; i++)
        {
            vec[a[i]].push_back(i);
        }
        ll ans = 0;
        for (ll i = 1; i <= n / 2; i++)
        {
            ll l = 2 * i + 1;
            if (l > n / 2)
            {
                ll cnt = vec[i].size();
                ans += (cnt * (cnt - 1)) / 2;
                continue;
            }
            vector<pair<ll, ll>> temp;
            for (auto val : vec[i])
            {
                temp.push_back({val, 0});
            }
            for (auto val : vec[l])
            {
                temp.push_back({val, 1});
            }
            sort(temp.begin(), temp.end());
            ll cnt = 0;
            for (auto v : temp)
            {
                if (v.second == 1)
                {
                    ans += (cnt * (cnt - 1)) / 2;
                    cnt = 0;
                }
                else
                {
                    cnt++;
                }
            }
            ans += (cnt * (cnt - 1)) / 2;
        }
        cout << ans << '\n';
    }

    return 0;
}
