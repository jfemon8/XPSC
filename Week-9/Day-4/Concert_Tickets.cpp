#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    multiset<int> elements;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        elements.insert(val);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        auto it = elements.upper_bound(x);
        if (it == elements.begin())
        {
            cout << "-1\n";
        }
        else
        {
            --it;
            cout << *it << '\n';
            elements.erase(it);
        }
    }

    return 0;
}
