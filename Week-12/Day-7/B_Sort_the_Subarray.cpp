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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (a[l] == b[l] && a[r] == b[r])
            {
                l++;
                r--;
            }
            else if (a[l] == b[l])
            {
                l++;
            }
            else if (a[r] == b[r])
            {
                r--;
            }
            else
            {
                break;
            }
        }
        while (l > 0 && b[l - 1] <= b[l])
        {
            l--;
        }
        while (r < n - 1 && b[r] <= b[r + 1])
        {
            r++;
        }
        cout << l + 1 << " " << r + 1 << '\n';
    }

    return 0;
}
