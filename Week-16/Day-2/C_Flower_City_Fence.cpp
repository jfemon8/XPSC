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
        vector<int> a(n), b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[0] != n)
        {
            cout << "NO\n";
            continue;
        }

        int cut = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int temp = a[i];
            temp -= cut;
            while (temp != 0)
            {
                b.push_back(i + 1);
                temp--;
            }
            cut = a[i];
        }
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                ans = false;
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