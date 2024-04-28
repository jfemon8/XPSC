#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    vector<ll> need(3), have(3), price(3);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
        {
            need[0]++;
        }
        else if (s[i] == 'S')
        {
            need[1]++;
        }
        else if (s[i] == 'C')
        {
            need[2]++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> have[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> price[i];
    }
    ll money;
    cin >> money;

    ll l = 0, r = 1e14, ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll taka = 0;
        for (int i = 0; i < 3; i++)
        {
            ll temp = mid * need[i];
            temp -= have[i];
            if (temp > 0)
            {
                taka += temp * price[i];
            }
        }
        if (taka <= money)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << '\n';

    return 0;
}
