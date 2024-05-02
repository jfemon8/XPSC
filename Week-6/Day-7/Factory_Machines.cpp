#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, t;
vector<ll> a;

bool good(ll time)
{
    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cnt += time / a[i];
        if (cnt >= t)
        {
            return true;
        }
    }

    return (cnt >= t);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> t;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = 1e18;
    while (r > l + 1)
    {
        ll m = (l + r) / 2;
        if (good(m))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    cout << r;

    return 0;
}
