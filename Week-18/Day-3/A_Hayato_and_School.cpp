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
        vector<int> odd, even;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2)
            {
                odd.push_back(i + 1);
            }
            else
            {
                even.push_back(i + 1);
            }
        }
        if (odd.empty() || (even.size() == 1 && odd.size() < 3))
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        if (odd.size() >= 3)
        {
            cout << odd[0] << " " << odd[1] << " " << odd[2] << '\n';
        }
        else
        {
            cout << odd[0] << " " << even[0] << " " << even[1] << '\n';
        }
    }

    return 0;
}
