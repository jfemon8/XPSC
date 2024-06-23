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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int diff = 0, ans = 0;

        for (int i = 1; i < n; i++)
        {
            diff += abs(a[i] - a[i - 1]);
        }

        ans = diff;

        auto change = [&](int index, int value)
        {
            int temp = a[index];
            a[index] = value;
            int diff2 = 0;
            for (int i = 1; i < n; i++)
            {
                diff2 += abs(a[i] - a[i - 1]);
            }
            a[index] = temp;
            return diff2;
        };

        for (int i = 0; i < n; i++)
        {
            ans = max(ans, change(i, 1));
            ans = max(ans, change(i, k));
        }

        cout << ans << '\n';
    }

    return 0;
}
