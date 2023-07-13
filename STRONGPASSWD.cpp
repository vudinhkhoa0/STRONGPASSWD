#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    cin >> s;
    if (s.length() >= 8)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (i >= 2 && s[i] == s[i-1])
            {
                cout << "NO";
                return 0;
            }
            else
            {
                if (s[i] >='a' && s[i] <= 'z') c1++;
                else if (s[i] >= 'A' && s[i] <= 'Z') c2++;
                else if (s[i] >= '0' && s[i] <= '9') c3++;
                else c4++;
            }
        }
        if (c1 > 0 && c2 > 0 && c3 > 0 && c4 > 0) cout << "YES";
        else cout << "NO";
    }
    else cout << "NO";
    return 0;
}

