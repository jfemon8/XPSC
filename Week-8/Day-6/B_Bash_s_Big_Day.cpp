#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, mx = 0;
    cin >> n;
    vector<int> mp(100005);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        mx = max(mx, x);
    }

    int ans = 1;
    for (int i = 2; i <= mx; i++)
    {
        int temp = 0;
        for (int j = 0; j <= mx; j += i)
        {
            temp += mp[j];
        }
        ans = max(ans, temp);
    }

    cout << ans;

    return 0;
}
