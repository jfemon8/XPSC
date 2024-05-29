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
        string s;
        cin >> n >> s;
        if (n == 1)
        {
            cout << "NO\n";
            continue;
        }
        if (n == 2)
        {
            if (s[0] != s[1])
            {
                cout << "NO\n";
            }
            else
            {
                cout << "RH\n";
            }
            continue;
        }
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        if ((abs(mp['N'] - mp['S'])) % 2 == 1 || (abs(mp['E'] - mp['W'])) % 2 == 1)
        {
            cout << "NO\n";
            continue;
        }
        int v = min(mp['N'], mp['S']);
        int h = min(mp['E'], mp['W']);
        int v1 = v, h1 = h;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'N' and v > 1)
            {
                s[i] = 'R';
                mp['N']--;
                v--;
            }
            else if (s[i] == 'N' and v == 1)
            {
                s[i] = 'H';
                mp['N']--;
                v--;
            }
            else if (s[i] == 'S' and v1 > 1)
            {
                s[i] = 'R';
                mp['S']--;
                v1--;
            }
            else if (s[i] == 'S' and v1 == 1)
            {
                s[i] = 'H';
                mp['S']--;
                v1--;
            }
            else if (s[i] == 'E' and h > 1)
            {
                s[i] = 'H';
                mp['E']--;
                h--;
            }
            else if (s[i] == 'E' and h == 1)
            {
                s[i] = 'R';
                mp['E']--;
                h--;
            }
            else if (s[i] == 'W' and h1 > 1)
            {
                s[i] = 'H';
                mp['W']--;
                h1--;
            }
            else if (s[i] == 'W' and h1 == 1)
            {
                s[i] = 'R';
                mp['W']--;
                h1--;
            }
        }
        v = max(mp['N'], mp['S']) / 2;
        h = max(mp['E'], mp['W']) / 2;
        for (int i = 0; i < n; i++)
        {
            if ((s[i] == 'N' || s[i] == 'S') && v > 0)
            {
                s[i] = 'R';
                v--;
            }
            else if (s[i] == 'N' || s[i] == 'S')
            {
                s[i] = 'H';
            }
            else if ((s[i] == 'E' || s[i] == 'W') && h > 0)
            {
                s[i] = 'R';
                h--;
            }
            else if (s[i] == 'E' || s[i] == 'W')
            {
                s[i] = 'H';
            }
        }
        cout << s << '\n';
    }
}