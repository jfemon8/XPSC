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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<ll> vec(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum |= a[i];
            vec[i] = sum;
        }
        int idx = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            bool valid = true, zero = true;
            for (int j = 0; j < 32; j++)
            {
                if (vec[i] & (1 << j))
                {
                    if (!zero)
                    {
                        valid = false;
                        break;
                    }
                }
                else
                {
                    zero = false;
                }
            }
            if (valid)
            {
                idx = i;
                break;
            }
        }

        cout << n - idx - 1 << '\n';
    }

    return 0;
}
