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
        int diff = INT_MAX, pos;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n == 1)
        {
            cout << a[0] << '\n';
            continue;
        }

        sort(a.begin(), a.end());
        if (n == 2)
        {
            cout << a[0] << " " << a[1] << '\n';
            continue;
        }

        for (int i = 1; i < n; i++)
        {
            if (abs(a[i] - a[i - 1]) < diff)
            {
                diff = abs(a[i] - a[i - 1]);
                pos = i - 1;
            }
        }
        for (int i = pos + 1; i < n; i++)
        {
            cout << a[i] << " ";
        }
        for (int i = 0; i <= pos; i++)
        {
            cout << a[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
