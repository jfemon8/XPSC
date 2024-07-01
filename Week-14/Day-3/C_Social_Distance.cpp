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
        ll n, k;
        string s;
        cin >> n >> k >> s;
        ll ans = 0, cnt = 0, one = 0, idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one = 1;
                idx = i;
                break;
            }
            else
            {
                cnt++;
            }
        }
        if (one == 0)
        {
            ans = ((cnt - 1) / (k + 1)) + 1;
            cout << ans << '\n';
            continue;
        }
        ans = cnt / (k + 1);
        cnt = 0;
        for (int i = idx + 1; i < n; i++)
        {
            if (s[i] == '1')
            {
                ans += (cnt - k) / (k + 1);
                cnt = 0;
            }
            else
            {
                cnt++;
            }
        }
        ans += cnt / (k + 1);
        cout << ans << '\n';
    }

    return 0;
}
