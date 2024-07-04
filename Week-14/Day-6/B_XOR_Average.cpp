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
        if (n % 2)
        {
            for (int i = 0; i < n; i++)
            {
                cout << "7 ";
            }
            cout << '\n';
        }
        else
        {
            for (int i = 0; i < n - 2; i++)
            {
                cout << "2 ";
            }
            cout << "1 3\n";
        }
    }

    return 0;
}
