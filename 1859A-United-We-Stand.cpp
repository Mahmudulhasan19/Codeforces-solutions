#include <bits/stdc++.h>
using namespace std;
#define operation()               \
    ;                             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
int main()
{
    operation();
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        long long a[n];
        long long count = 0;
        for (long long i = 0; i < n; i++)
            cin >> a[i];

        // bool equal = true ;
        sort(a, a + n);
        long long x = a[0];

        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
                count++;
        }
        if (count == n)
            cout << "-1" << endl;
        else
        {
            cout << count << " " << n - count << endl;
            for (int i = 0; i < count; i++)
                cout << a[i] << " ";
            cout << endl;
            for (int i = count; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }
}