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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b = a;
        sort(b.begin(), b.end());
        if (a == b)
        {
            cout << "0\n";
            continue;
        }
        if (a[0] == n && a[n - 1] == 1)
        {
            cout << "3\n";
            continue;
        }
        if (a[0] != 1 && a[n - 1] != n)
        {
            cout << "2\n";
            continue;
        }
        cout << "1\n";
    }

    return 0;
}
