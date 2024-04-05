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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll cnt = 0, odd = 0;
        for (int i = 0; i < k; i++)
        {
            if (a[i] % 2 != 0)
            {
                odd++;
            }
        }
        if (odd > 0)
        {
            cnt++;
        }
        for (int i = k; i < n; i++)
        {
            if (a[i - k] % 2 != 0)
            {
                odd--;
            }
            if (a[i] % 2 != 0)
            {
                odd++;
            }
            if (odd > 0)
            {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}
