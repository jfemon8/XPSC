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
        ll n, k, d, w;
        cin >> n >> k >> d >> w;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll start = 0, total = 1, val = d + w;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[start] + val || i - start + 1 > k)
            {
                total++;
                start = i;
            }
        }

        cout << total << '\n';
    }

    return 0;
}
