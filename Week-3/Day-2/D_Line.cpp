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
        string s;
        cin >> n >> s;
        ll cnt = 0;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                a[i] = i;
                cnt += i;
            }
            else
            {
                a[i] = n - i - 1;
                cnt += n - i - 1;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            ll temp = max(i, n - i - 1);
            if (a[i] == temp)
            {
                b[i] = 0;
            }
            else
            {
                b[i] = abs(temp - a[i]);
            }
        }
        sort(b.begin(), b.end(), greater<ll>());
        for (ll i = 0; i < n; i++)
        {
            cnt += b[i];
            cout << cnt << " ";
        }
        cout << "\n";
    }

    return 0;
}
