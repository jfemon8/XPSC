#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    int ans = 0, l = 0;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
        while (mp[a[i]] > 1)
        {
            mp[a[l++]]--;
        }
        ans = max(ans, i - l + 1);
    }
    cout << ans;

    return 0;
}
