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

    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ll cnt = 0, l = i, r = j, tar = a[i] + a[j];
            while (l < r)
            {
                if (a[l] + a[r] == tar)
                {
                    cnt++;
                    l++;
                    r--;
                }
                else if (a[l] + a[r] < tar)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
            ans = max(ans, cnt);
        }
    }
    cout << ans << '\n';

    return 0;
}
