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
        ll temp = n;
        vector<ll> ans, odd;
        ll x = 1;
        while (n > 1)
        {
            if (n % 2)
            {
                odd.push_back(x);
            }
            ans.push_back(x);
            x *= 2;
            n /= 2;
        }
        reverse(ans.begin(), ans.end());
        for (ll val : ans)
        {
            odd.push_back(val);
        }
        cout << odd.size() + 1 << '\n'
             << temp << " ";
        for (ll val : odd)
        {
            temp -= val;
            cout << temp << " ";
        }
        cout << '\n';
    }

    return 0;
}
