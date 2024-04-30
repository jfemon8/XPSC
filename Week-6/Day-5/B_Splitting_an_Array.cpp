#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, k;
vector<ll> a;

ll seg(ll val)
{
    ll cnt = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > val)
        {
            return k + 1;
        }
        sum += a[i];
        if (sum > val)
        {
            cnt++;
            sum = a[i];
        }
    }
    return ++cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l = 0, r = 1e14;
    while (r > l + 1)
    {
        ll mid = (l + r) / 2;
        if (seg(mid) <= k)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << r << '\n';

    return 0;
}
