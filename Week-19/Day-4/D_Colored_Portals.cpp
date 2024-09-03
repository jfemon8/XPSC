#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const ll N = 2e5 + 5;
vector<set<ll>> arr(N);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<string> vec(n + 1);
        map<string, vector<ll>> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> vec[i];
            mp[vec[i]].push_back(i);
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            if (vec[l][0] == vec[r][0] || vec[l][0] == vec[r][1] || vec[l][1] == vec[r][0] || vec[l][1] == vec[r][1])
            {
                cout << abs(r - l) << '\n';
                continue;
            }
            ll ans = LLONG_MAX;
            string temp = "XX";
            for (char ch1 : vec[l])
            {
                for (char ch2 : vec[r])
                {
                    temp[0] = min(ch1, ch2);
                    temp[1] = max(ch1, ch2);

                    auto it = lower_bound(mp[temp].begin(), mp[temp].end(), l);
                    if (it != mp[temp].end())
                    {
                        if (*it <= r)
                        {
                            ans = abs(r - l);
                        }
                        else
                        {
                            ans = min(ans, abs(*it - r) + abs(*it - l));
                        }
                    }
                    if (it != mp[temp].begin())
                    {
                        it--;
                        ans = min(ans, abs(*it - r) + abs(*it - l));
                    }
                }
            }
            if (ans == LLONG_MAX)
            {
                cout << "-1\n";
            }
            else
            {
                cout << ans << '\n';
            }
        }
    }

    return 0;
}
