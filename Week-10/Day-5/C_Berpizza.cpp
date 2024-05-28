#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

struct Comparator
{
    bool operator()(const pair<int, int> &a, const pair<int, int> &b)
    {
        if (a.first == b.first)
        {
            return a.second > b.second;
        }
        return a.first < b.first;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    priority_queue<pair<int, int>, vector<pair<int, int>>, Comparator> poly;
    int mono = 0;
    int idx = 0;
    vector<bool> serve(5e5 + 5, false);

    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int m;
            cin >> m;
            poly.push({m, idx});
            idx++;
        }
        else if (x == 2)
        {
            while (serve[mono])
            {
                mono++;
            }
            cout << mono + 1 << " ";
            serve[mono] = true;
        }
        else if (x == 3)
        {
            while (serve[poly.top().second])
            {
                poly.pop();
            }
            cout << poly.top().second + 1 << " ";
            serve[poly.top().second] = true;
            poly.pop();
        }
    }

    return 0;
}
