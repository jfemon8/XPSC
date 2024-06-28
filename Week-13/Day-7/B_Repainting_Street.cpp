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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll cnt = 0, ans = n + k;
        for (auto [x, y] : mp)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] != x)
                {
                    cnt++;
                    i += (k - 1);
                }
            }
            ans = min(ans, cnt);
            cnt = 0;
        }
        cout << ans << '\n';
    }

    return 0;
}
