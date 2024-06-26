#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll check(string num, string chk)
{
    ll found = 0, idx = 0;
    for (int i = 0; i < chk.size(); i++)
    {
        bool ok = false;
        for (int j = idx; j < num.size(); j++)
        {
            if (chk[i] == num[j])
            {
                ok = true;
                found++;
                idx = j + 1;
                break;
            }
        }
        if (!ok)
        {
            break;
        }
    }
    return (num.size() - found) + (chk.size() - found);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string all[65];
    ll test = 1;
    for (int i = 1; i < 62; i++)
    {
        all[i] = to_string(test);
        test *= 2;
    }

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = LLONG_MAX;
        string num = to_string(n);
        for (int i = 1; i < 62; i++)
        {
            ans = min(ans, check(num, all[i]));
        }
        cout << ans << '\n';
    }

    return 0;
}
