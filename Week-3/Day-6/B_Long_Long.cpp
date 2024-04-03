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
        ll flag = 1, sum = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
            if (a[i] < 0 && flag == 1)
            {
                flag = 0;
                cnt++;
            }
            else if (a[i] > 0 && flag == 0)
            {
                flag = 1;
            }
        }
        cout << sum << " " << cnt << "\n";
    }

    return 0;
}
