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
        ll sum = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        ll temp = 0;
        for (int i = 0; i < n - 1; i++)
        {
            temp += a[i];
            ans = max(ans, __gcd(temp, sum - temp));
        }
        cout << ans << '\n';
    }

    return 0;
}
