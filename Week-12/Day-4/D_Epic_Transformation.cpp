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
        int n;
        cin >> n;
        map<int, int> mp;
        int maxCnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            maxCnt = max(maxCnt, mp[x]);
        }
        if (maxCnt > n / 2)
        {
            cout << n - 2 * (n - maxCnt) << '\n';
            continue;
        }

        cout << (n % 2 == 0 ? "0\n" : "1\n");
    }

    return 0;
}
