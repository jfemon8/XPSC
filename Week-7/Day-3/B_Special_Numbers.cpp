#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> p(41);
        p[0] = 1;
        for (int i = 1; i <= 40; i++)
        {
            p[i] = p[i - 1] * n;
            p[i] %= mod;
        }
        ll ans = 0;
        for (int i = 32; i >= 0; i--)
        {
            if ((k >> i) & 1)
            {
                ans += p[i];
                ans %= mod;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
