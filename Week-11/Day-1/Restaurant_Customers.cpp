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

    int n;
    cin >> n;
    map<int, int> mp;
    while (n--)
    {
        int a, d;
        cin >> a >> d;
        mp[a]++;
        mp[d + 1]--;
    }
    ll sum = 0, ans = 0;
    for (auto [x, y] : mp)
    {
        sum += y;
        ans = max(ans, sum);
    }
    cout << ans << '\n';

    return 0;
}
