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
        ll n, m, k, ans = 0;
        cin >> n >> m >> k;
        vector<ll> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end(), greater<ll>());
        sort(b.begin(), b.end(), greater<ll>());

        for (int i = 0; i < min(n, m); i++)
        {
            ans += min(a[i], b[i] * k);
        }
        cout << ans << '\n';
    }

    return 0;
}
