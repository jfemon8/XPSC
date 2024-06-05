#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string a;
        cin >> n >> a;
        long long ans = (n * (n + 1LL)) / 2;
        unordered_map<int, int> mp;
        mp[0] = 1;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            cnt += (a[i] == '1' ? 1 : -1);
            ans += mp[cnt]++;
        }

        cout << ans << '\n';
    }
}