#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll l = 0, r = a[n - 1];
        while (l < r)
        {
            ll i = 0, mid = (l + r) / 2;
            ll wait = a[i] + 2 * mid;
            while (i < n && a[i] <= wait)
            {
                i++;
            }
            wait = a[i] + 2 * mid;
            while (i < n && a[i] <= wait)
            {
                i++;
            }
            wait = a[i] + 2 * mid;
            while (i < n && a[i] <= wait)
            {
                i++;
            }
            if (i == n)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << r << '\n';
    }

    return 0;
}
