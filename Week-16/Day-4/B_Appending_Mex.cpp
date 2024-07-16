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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = -1, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > i || a[i] > maxi)
        {
            ans = i + 1;
            break;
        }
        maxi = max(maxi, a[i] + 1);
    }
    cout << ans << '\n';

    return 0;
}
