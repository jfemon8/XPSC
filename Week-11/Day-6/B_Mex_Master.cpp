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
        vector<int> a(n);
        int zero = 0, one = 0, other = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                zero++;
            }
            else if (a[i] == 1)
            {
                one++;
            }
            else
            {
                other++;
            }
        }

        if (one + other >= n / 2)
        {
            cout << "0\n";
        }
        else if (one == 0 || other != 0)
        {
            cout << "1\n";
        }
        else
        {
            cout << "2\n";
        }
    }

    return 0;
}
