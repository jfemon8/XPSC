#include <bits/stdc++.h>
#define ll long long
using namespace std;

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
        string s;
        cin >> s;
        map<char, int> mp1, mp2;
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (s[i] != s[j] && mp1.empty())
            {
                mp1[s[i++]]++;
            }
            else if (s[i] != s[j] && mp1.begin()->first == s[i])
            {
                mp1[s[i++]]++;
            }
            else if (s[i] != s[j] && mp1.begin()->first == s[j])
            {
                mp1[s[j--]]++;
            }
            else if (s[i] != s[j])
            {
                mp1[s[i++]]++;
            }
            else
            {
                i++;
                j--;
            }
        }
        i = 0, j = n - 1;
        while (i < j)
        {
            if (s[i] != s[j] && mp2.empty())
            {
                mp2[s[j--]]++;
            }
            else if (s[i] != s[j] && mp2.begin()->first == s[i])
            {
                mp2[s[i++]]++;
            }
            else if (s[i] != s[j] && mp2.begin()->first == s[j])
            {
                mp2[s[j--]]++;
            }
            else if (s[i] != s[j])
            {
                mp2[s[i++]]++;
            }
            else
            {
                i++;
                j--;
            }
        }
        if (mp1.size() == 0 || mp2.size() == 0)
        {
            cout << "0\n";
        }
        else if (mp1.size() == 1 && mp2.size() == 1)
        {
            auto it1 = mp1.begin();
            auto it2 = mp2.begin();
            cout << min(it1->second, it2->second) << '\n';
        }
        else if (mp1.size() == 1)
        {
            auto it = mp1.begin();
            cout << it->second << '\n';
        }
        else if (mp2.size() == 1)
        {
            auto it = mp2.begin();
            cout << it->second << '\n';
        }
        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}
