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
        vector<int> a(n + 1), pref(n + 1), suff(n + 2);
        ll one = 0, cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }

        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 1)
            {
                one++;
            }
            else
            {
                cnt += one;
            }
        }
        for (int i = n; i > 0; i--)
        {
            if (a[i] == 0)
            {
                suff[i] = suff[i + 1] + 1;
            }
            else
            {
                suff[i] = suff[i + 1];
            }
        }
        ll ans = cnt;
        for (int i = 1; i <= n; i++)
        {
            ll value = cnt;
            if (a[i] == 0)
            {
                value -= pref[i];
                value += suff[i + 1];
            }
            else
            {
                value -= suff[i];
                value += pref[i - 1];
            }
            ans = max(ans, value);
        }

        cout << ans << '\n';
    }

    return 0;
}
