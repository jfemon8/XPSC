#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll m = n / 2;
    ll ans = a[m];
    while (k > 0)
    {
        while (m != n - 1 && a[m] == a[m + 1])
        {
            m++;
        }
        if (m == n - 1)
        {
            ll val = k / (m - (n / 2) + 1);
            ans += val;
            break;
        }
        else
        {
            ll dif = a[m + 1] - a[m];
            ll val = k / (m - (n / 2) + 1);
            if (val >= dif)
            {
                ans = a[m + 1];
                k -= (dif * (m - (n / 2) + 1));
                m++;
            }
            else
            {
                ans += val;
                break;
            }
        }
    }
    cout << ans;

    return 0;
}
