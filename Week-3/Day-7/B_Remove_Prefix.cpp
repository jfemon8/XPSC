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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll cnt = 0;
        map<ll, ll> mp;
        for (int i = n - 1; i >= 0; i--)
        {
            if (mp[a[i]] != 1)
            {
                mp[a[i]] = 1;
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout << n - cnt << '\n';
    }

    return 0;
}
