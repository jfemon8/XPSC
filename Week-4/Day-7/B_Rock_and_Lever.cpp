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
        vector<ll> ans(32, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            for (int j = 31; j >= 0; j--)
            {
                if ((a[i] >> j) & 1)
                {
                    ans[j]++;
                    break;
                }
            }
        }
        ll cnt = 0;
        for (ll x : ans)
        {
            cnt += (x * (x - 1)) / 2;
        }
        cout << cnt << "\n";
    }

    return 0;
}
