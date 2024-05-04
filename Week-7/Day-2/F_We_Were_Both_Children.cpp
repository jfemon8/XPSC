#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n + 1, 0), v(n + 1);
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x <= n)
            {
                a[x]++;
            }
        }
        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                v[j] += a[i];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            ans = max(ans, v[i]);
        }
        cout << ans << '\n';
    }

    return 0;
}
