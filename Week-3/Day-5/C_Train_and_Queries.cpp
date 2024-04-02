#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // cin.ignore();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        map<int, int> first, last;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (first.find(v[i]) == first.end())
            {
                first[v[i]] = i;
            }
            last[v[i]] = i;
        }
        while (k--)
        {
            int a, b;
            cin >> a >> b;
            if (first.find(a) == first.end() || last.find(b) == last.end())
            {
                cout << "NO\n";
            }
            else
            {
                cout << (first[a] <= last[b] ? "YES\n" : "NO\n");
            }
        }
    }

    return 0;
}
