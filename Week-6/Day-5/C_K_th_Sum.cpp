#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, k;
vector<ll> a, b;

bool Kth(ll val)
{
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < val)
        {
            cnt += (lower_bound(b.begin(), b.end(), val - a[i]) - b.begin());
        }
        if (cnt >= k)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    ll l = 1, r = 2e9 + 1;
    while (r > l + 1)
    {
        ll mid = (r + l) / 2;
        if (Kth(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << l << '\n';

    return 0;
}
