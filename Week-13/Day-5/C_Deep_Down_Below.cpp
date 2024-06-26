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
        vector<pair<ll, ll>> a(n);
        for (int i = 0; i < n; i++)
        {
            ll k;
            cin >> k;
            ll curr = 2, pow = 2;
            for (int j = 0; j < k; j++)
            {
                ll x;
                cin >> x;
                if (pow <= x)
                {
                    ll temp = x - pow;
                    pow += temp + 1;
                    curr += temp + 1;
                }
                pow++;
            }
            a[i] = {curr, k};
        }
        sort(a.begin(), a.end());
        ll ans = 0, total = 0;
        for (int i = 0; i < n; i++)
        {
            ans = max(a[i].first - total, ans);
            total += a[i].second;
        }
        cout << ans << '\n';
    }

    return 0;
}
