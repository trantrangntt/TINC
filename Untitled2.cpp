#include <bits/stdc++.h>
using namespace std;
int maint()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 2; i <= sqrt(n); i++)
        {
            int count = 0;
            if (n % i == 0)
            {
                while (n % i == 0)
                {
                    count++;
                    n=n/i;
                }
                cout << i << " " << count;
            }
        }
        cout << endl;
    }
    return 0;
}
