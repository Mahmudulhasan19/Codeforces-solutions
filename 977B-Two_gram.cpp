#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string f;
    int c = 0, r = 0;
    for (int i = 0; i < n - 1; i++)
    {
        c = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (s[i] == s[j] && s[i + 1] == s[j + 1])
                c++;
            if (r < c)
            {
                r = c;
                f = string(1, s[i]) + string(1, s[i + 1]);
            }
        }
    }
    cout << f << endl;
    return 0;
}
