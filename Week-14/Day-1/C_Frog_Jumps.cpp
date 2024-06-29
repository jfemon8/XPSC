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
        ll ans = 0, n = s.size();
        vector<ll> pos(1, 0);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                pos.push_back(i + 1);
            }
        }
        pos.push_back(n + 1);

        for (int i = 1; i < pos.size(); i++)
        {
            ans = max(ans, (pos[i] - pos[i - 1]));
        }

        cout << ans << '\n';
    }

    return 0;
}
