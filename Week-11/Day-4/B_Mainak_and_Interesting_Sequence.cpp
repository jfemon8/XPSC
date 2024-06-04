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
        int n, m;
        cin >> n >> m;
        if (n > m)
        {
            cout << "No\n";
        }
        else if (n % 2)
        {
            cout << "Yes\n";
            for (int i = 1; i < n; i++)
            {
                cout << "1 ";
            }
            cout << m - n + 1 << '\n';
        }
        else if ((m - n) % 2)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
            for (int i = 1; i < n - 1; i++)
            {
                cout << "1 ";
            }
            cout << (m - n + 2) / 2 << " " << (m - n + 2) / 2 << '\n';
        }
    }

    return 0;
}
