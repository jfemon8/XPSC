#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, s;
    cin >> n >> s;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll sum = 0, i = 0, j = 0, ans = 0;
    while (j < n)
    {
        sum += arr[j];
        while (sum > s)
        {
            sum -= arr[i++];
        }
        ans += j - i + 1;
        j++;
    }
    cout << ans << "\n";

    return 0;
}
