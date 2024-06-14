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

    int n;
    cin >> n;
    vector<int> a(n), ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int temp = n;
    if (n % 2)
    {
        a.push_back(a[n - 1]);
        temp++;
    }
    int idx = 0;
    for (int i = 0; i < temp; i += 2)
    {
        ans[idx] = a[i];
        ans[n - idx - 1] = a[i + 1];
        idx++;
    }
    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << '\n';

    return 0;
}
