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
        if (n == 1)
        {
            cout << "1\n";
            continue;
        }
        if (n % 2)
        {
            cout << "-1\n";
            continue;
        }
        vector<ll> a(n);
        ll mx = n - 1, mn = 0;
        for (int i = 0; i < n; i += 2)
        {
            a[i] = mn++;
            a[i + 1] = mx--;
        }
        vector<ll> ans(n), pref(n + 1);

        for (int i = 0; i < n; i++)
        {
            pref[i + 1] = n + a[i];
        }

        ll temp = n;
        for (int i = 1; i <= n; i++)
        {
            if (pref[i] + temp < pref[i - 1])
            {
                temp += n;
                pref[i] += temp;
            }
            else if (pref[i] < pref[i - 1])
            {
                pref[i] += temp;
            }
        }

        for (int i = 0; i < n; i++)
        {
            ans[i] = pref[i + 1] - pref[i];
        }

        for (int val : ans)
        {
            cout << val << " ";
        }
        cout << '\n';
    }

    return 0;
}
