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
        ll n, left, right;
        cin >> n >> left >> right;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll cnt = 0, point = 0, l = 0, r = 0;
        while (r < n)
        {
            point += a[r];

            while (point > right && l < r)
            {
                point -= a[l++];
            }

            if (point >= left && point <= right)
            {
                cnt++;
                point = 0;
                l = r + 1;
            }
            r++;
        }
        cout << cnt << '\n';
    }

    return 0;
}