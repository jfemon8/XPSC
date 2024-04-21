#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> palindromes;
void pali()
{
    for (int i = 0; i <= 32768; i++)
    {
        string s = to_string(i);
        string temp = s;
        reverse(temp.begin(), temp.end());
        if (temp == s)
        {
            palindromes.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    pali();
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        ll ans = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int val : a)
        {
            mp[val]++;
            for (int p : palindromes)
            {
                ans += mp[val ^ p];
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
