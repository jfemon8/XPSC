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
        ll a, b, n;
        cin >> a >> b >> n;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            b += min(a - 1, x);
        }

        cout << b << '\n';
    }

    return 0;
}