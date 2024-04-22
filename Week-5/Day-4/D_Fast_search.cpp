#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cin >> k;
    while (k--)
    {
        ll s, e;
        cin >> s >> e;
        ll l = -1, r = n;
        while (r > l + 1)
        {
            ll mid = (l + r) / 2;
            if (a[mid] < s)
            {
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        ll x = r;
        l = -1;
        r = n;
        while (r > l + 1)
        {
            ll mid = (l + r) / 2;
            if (a[mid] <= e)
            {
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        cout << l - x + 1 << " ";
    }

    return 0;
}
