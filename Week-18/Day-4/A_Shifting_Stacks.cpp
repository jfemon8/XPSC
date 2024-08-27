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
        ll n, has = 0;
        cin >> n;
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x > i)
            {
                has += x - i;
            }
            else if (x < i)
            {
                ll need = i - x;
                if (need <= has)
                {
                    has -= need;
                }
                else
                {
                    ans = false;
                }
            }
        }

        if (!ans)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}
