#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, d;
        cin >> n >> k >> d;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = INT_MAX;
        map<int, int> mp;
        int l = 0, r = 0;
        while (r < n)
        {
            mp[a[r]]++;
            if (r - l + 1 == d)
            {
                int len = mp.size();
                ans = min(ans, len);
                mp[a[l]]--;
                if (mp[a[l]] == 0)
                {
                    mp.erase(a[l]);
                }
                l++;
            }
            r++;
        }
        cout << ans << '\n';
    }

    return 0;
}
