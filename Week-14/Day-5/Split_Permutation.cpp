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
        ll n, m;
        cin >> n;
        if (n % 2)
        {
            m = n - 1;
        }
        else
        {
            m = n;
        }
        for (int i = 1; i <= m / 2; i++)
        {
            cout << i << " " << m - i + 1 << " ";
        }
        if (n % 2)
        {
            cout << n;
        }
        cout << '\n';
    }

    return 0;
}
