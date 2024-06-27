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
        ll fst = 0;
        bool ans = false;
        for (int i = 0; i < n - 1; i++)
        {
            fst ^= a[i];
            ll tmp = 0, temp = 0;
            for (int j = i + 1; j < n; j++)
            {
                tmp ^= a[j];
                temp ^= a[j];
                if (tmp == fst && j != n - 1)
                {
                    tmp = 0;
                }
            }
            if (fst == tmp || fst == temp)
            {
                ans = true;
                break;
            }
        }

        fst = 0;
        for (int i = n - 1; i > 0; i--)
        {
            fst ^= a[i];
            ll tmp = 0, temp = 0;
            for (int j = i - 1; j >= 0; j--)
            {
                tmp ^= a[j];
                temp ^= a[j];
                if (tmp == fst && j != 0)
                {
                    tmp = 0;
                }
            }
            if (fst == tmp || fst == temp)
            {
                ans = true;
                break;
            }
        }

        if (ans)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
