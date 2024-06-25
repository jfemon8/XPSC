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
        vector<ll> a(n), cnt(31, 0);
        ll sum = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            for (int j = 0; j < 31; j++)
            {
                if (!((a[i] >> j) & 1))
                {
                    cnt[j]++;
                }
            }
            sum &= a[i];
        }
        for (int i = 30; i >= 0; i--)
        {
            if (cnt[i] <= k)
            {
                sum |= (1 << i);
                k -= cnt[i];
            }
        }
        cout << sum << '\n';
    }

    return 0;
}