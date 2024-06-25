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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int ans = 15;
        for (int j = 0; j < 20; j++)
        {
            int val = (a[i] + j) % 32768;
            int cnt = j;
            while (val != 0)
            {
                val = (2 * val) % 32768;
                cnt++;
            }
            ans = min(ans, cnt);
        }
        cout << ans << ' ';
    }

    return 0;
}
