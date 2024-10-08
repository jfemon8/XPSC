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
        if (n == 1)
        {
            cout << "1\n";
            continue;
        }
        if (n == 2)
        {
            cout << "2 1\n";
            continue;
        }
        vector<int> a(n, 0);
        a[n / 2] = 1;
        a[0] = 2;
        a[n - 1] = 3;
        int i = 1, val = 4;
        while (i < n - 1)
        {
            if (a[i] == 0)
            {
                a[i] = val++;
            }
            i++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
