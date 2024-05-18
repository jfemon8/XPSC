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
        vector<ll> a(n);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = a[0];
        for (int i = 2; i < n; i += 2)
        {
            ans = __gcd(ans, a[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % ans == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << ans << '\n';
            continue;
        }
        ans = a[1];
        flag = true;
        for (int i = 3; i < n; i += 2)
        {
            ans = __gcd(ans, a[i]);
        }
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] % ans == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << ans << '\n';
            continue;
        }
        cout << "0\n";
    }

    return 0;
}
