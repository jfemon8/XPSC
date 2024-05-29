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
        string a, b;
        cin >> a >> b;
        int n = a.size();
        if ((a[1] == '1' && b[1] == '1') || (a[n - 2] == '0' && b[n - 2] == '0'))
        {
            cout << "YES\n";
            continue;
        }
        bool ans = false;
        for (int i = 1; i < n - 2; i++)
        {
            if (a[i] == '0' && a[i + 1] == '1' && b[i] == '0' && b[i + 1] == '1')
            {
                cout << "YES\n";
                ans = true;
                break;
            }
        }
        if (!ans)
        {
            cout << "NO\n";
        }
    }

    return 0;
}
