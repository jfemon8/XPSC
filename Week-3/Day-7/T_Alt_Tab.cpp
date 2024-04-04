#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> a(n);
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    string s = "";
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[a[i]] != 0)
        {
            s += a[i][a[i].size() - 2];
            s += a[i][a[i].size() - 1];
            mp[a[i]] = 0;
        }
    }
    cout << s << '\n';

    return 0;
}
