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
        vector<int> a(n + 1, 0);
        int idx = 1, val = 1, val2 = n;
        for (int i = 1; i <= k; i++)
        {
            if (i % 2)
            {
                int j;
                for (j = idx; j <= n; j += k)
                {
                    a[j] = val++;
                }
            }
            else
            {
                int j;
                for (j = idx; j <= n; j += k)
                {
                    a[j] = val2--;
                }
            }
            idx++;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
