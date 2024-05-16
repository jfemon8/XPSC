#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, y = 0;
    cin >> n;
    vector<ll> a(n);
    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    ll val;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != mx)
        {
            val = mx - a[i];
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != mx)
        {
            ll temp = mx - a[i];
            val = __gcd(val, temp);
        }
    }
    for (int i = 0; i < n; i++)
    {
        y += (mx - a[i]) / val;
    }
    cout << y << " " << val;

    return 0;
}
