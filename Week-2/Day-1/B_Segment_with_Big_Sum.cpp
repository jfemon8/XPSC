#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, s;
    cin >> n >> s;
    ll arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arr[n] = 0;
    ll sum = 0, i = 0, j = 0, ans = INT_MAX;
    while (j <= n)
    {
        if (sum >= s)
        {
            ans = min(ans, j - i);
            sum -= arr[i++];
        }
        else
        {
            sum += arr[j++];
        }
    }
    if (ans == INT_MAX)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << ans << "\n";
    }

    return 0;
}
