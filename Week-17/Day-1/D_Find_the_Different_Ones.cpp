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
        int n, q, val = 0;
        cin >> n;
        vector<int> a(n), arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        arr[0] = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
            {
                arr[i] = ++val;
            }
            else
            {
                arr[i] = val;
            }
        }

        cin >> q;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            if (arr[l - 1] == arr[r - 1])
            {
                cout << "-1 -1\n";
            }
            else
            {
                int idx = (upper_bound(arr.begin() + l - 1, arr.begin() + r, arr[l - 1]) - arr.begin());
                cout << l << " " << idx + 1 << '\n';
            }
        }
        cout << '\n';
    }

    return 0;
}
