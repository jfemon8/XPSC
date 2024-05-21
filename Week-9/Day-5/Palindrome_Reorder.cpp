#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    vector<int> a(26, 0);

    for (char c : s)
    {
        a[c - 'A']++;
    }

    int odd_count = 0;
    int odd_char_index = -1;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] % 2 == 1)
        {
            odd_count++;
            odd_char_index = i;
        }
    }

    if (odd_count > 1)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        string first_half = "";
        string second_half = "";
        char middle_char = '\0';

        for (int i = 0; i < 26; i++)
        {
            if (a[i] % 2 == 1)
            {
                middle_char = 'A' + i;
                a[i]--;
            }
            first_half += string(a[i] / 2, 'A' + i);
        }

        second_half = first_half;
        reverse(second_half.begin(), second_half.end());

        if (middle_char != '\0')
        {
            first_half += middle_char;
        }

        cout << first_half + second_half;
    }

    return 0;
}
