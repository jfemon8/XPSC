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
        ll n, c, q;
        string s;
        cin >> n >> c >> q >> s;
        s = '#' + s;
        vector<pair<ll, ll>> pos;
        vector<pair<ll, ll>> seg;
        seg.push_back({1, n});
        ll last = n + 1;
        for (int i = 0; i < c; i++)
        {
            ll l, r;
            cin >> l >> r;
            pos.push_back({l, r});
            seg.push_back({last, last + r - l});
            last = last + r - l + 1;
        }
        while (q--)
        {
            ll idx;
            cin >> idx;
            if (idx > 0 && idx <= n)
            {
                cout << s[idx] << '\n';
                continue;
            }
            for (int i = c; i >= 0; i--)
            {
                if (seg[i].first <= idx && seg[i].second >= idx)
                {
                    idx = pos[i - 1].first + (idx - seg[i].first);
                    if (idx > 0 && idx <= n)
                    {
                        cout << s[idx] << '\n';
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
