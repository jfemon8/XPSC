#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ans = 0, i = 0, j = 0, sum = 0;
    while (j <= n)
    {
        if (sum >= s)
        {
            ans += n - j + 1;
            sum -= arr[i++];
        }
        else
        {
            sum += arr[j++];
        }
    }
    cout << ans << "\n";

    return 0;
}
