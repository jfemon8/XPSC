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
        int val = 1e8;
        vector<int> a;
        int m = (n / 4) * 4;
        for (int i = 0; i < m; i++)
        {
            a.push_back(i + 4);
        }
        if (n % 4 == 1)
        {
            a.push_back(0);
        }
        else if (n % 4 == 2)
        {
            a[a.size() - 1] = val;
            int sum = 0;
            for (int v : a)
            {
                sum ^= v;
            }
            a.push_back(sum);
            a.push_back(0);
        }
        else if (n % 4 == 3)
        {
            a.push_back(1);
            a.push_back(2);
            a.push_back(3);
        }
        for (int ans : a)
        {
            cout << ans << " ";
        }
        cout << '\n';
    }

    return 0;
}
