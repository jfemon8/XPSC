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
        ll sum = 0, neg = 0, mn = LLONG_MAX;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            neg += a[i] < 0;
            sum += abs(a[i]);
            mn = min(mn, abs(a[i]));
        }
        if (neg % 2)
        {
            cout << sum - 2 * mn << '\n';
        }
        else
        {
            cout << sum << '\n';
        }
    }

    return 0;
}
