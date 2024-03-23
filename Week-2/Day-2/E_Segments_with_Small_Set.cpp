#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll val = 1e5 + 5;

int main()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll mp[val] = {0};
    ll i = 0, j = 0, cnt = 0, ans = 0;
    while (j < n)
    {
        mp[arr[j]]++;
        if (mp[arr[j]] == 1)
        {
            cnt++;
            while (cnt > s)
            {
                mp[arr[i]]--;
                if (mp[arr[i]] == 0)
                {
                    cnt--;
                }
                i++;
            }
        }
        ans += j - i + 1;
        j++;
    }
    cout << ans << "\n";

    return 0;
}
