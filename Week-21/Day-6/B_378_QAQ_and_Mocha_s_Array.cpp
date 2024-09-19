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
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        ll x = a[0];
        ll y = a[1];
        for (int i = 1; i < n; i++)
        {
            if (a[i] % x != 0)
            {
                y = a[i];
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % x != 0 && a[i] % y != 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}