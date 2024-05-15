#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll lcm(ll a, ll b)
{
    ll val = __gcd(a, b);
    return (a * b) / val;
}

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
        ll temp = 1;
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            temp = lcm(temp, i + 2);
            if (a[i] % temp == 0)
            {
                ans = false;
                break;
            }
        }
        if (ans)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
