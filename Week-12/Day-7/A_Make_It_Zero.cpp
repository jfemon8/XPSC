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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum ^= a[i];
        }
        if (sum == 0)
        {
            cout << "1\n"
                 << "1 " << n << '\n';
            continue;
        }
        if (n % 2 == 0)
        {
            cout << "2\n"
                 << "1 " << n << '\n'
                 << "1 " << n << '\n';
        }
        else
        {
            if (((n + 1) / 2) % 2)
            {
                cout << "4\n"
                     << "1 " << n / 2 << '\n'
                     << "1 " << n / 2 << '\n'
                     << n / 2 << " " << n << '\n'
                     << n / 2 << " " << n << '\n';
            }
            else
            {
                cout << "4\n"
                     << "1 " << (n + 1) / 2 << '\n'
                     << "1 " << (n + 1) / 2 << '\n'
                     << (n + 1) / 2 << " " << n << '\n'
                     << (n + 1) / 2 << " " << n << '\n';
            }
        }
    }

    return 0;
}
