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
        vector<ll> a(n);
        vector<ll> cnt(n + 1, 0);
        ll val = 0, count = 0;
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i < n; i++)
        {
            ll diff = a[i] - a[i - 1];
            if (diff > n || cnt[diff] > 0)
            {
                val = diff;
                count++;
            }
            else
            {
                cnt[diff]++;
            }
        }

        if (count == 0)
        {
            cout << "YES\n";
        }
        else if (count > 1)
        {
            cout << "NO\n";
        }
        else
        {
            ll sum = 0;
            for (int i = 1; i <= n; i++)
            {
                if (cnt[i] == 0)
                {
                    sum += i;
                }
            }
            if (sum == val)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
