#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans += arr[i];
    }
    sort(arr.begin(), arr.end());
    ll i = 0;
    while (i < n)
    {
        if (ans % 2 == 0)
        {
            break;
        }
        else if ((ans - arr[i]) % 2 == 0)
        {
            ans -= arr[i];
            break;
        }
        i++;
    }
    cout << ans << "\n";

    return 0;
}
