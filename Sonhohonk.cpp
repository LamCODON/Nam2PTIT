#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], dem = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= k)
                ++dem;
        }
        int bad = 0;
        for (int i = 0; i < dem; i++)
            if (a[i] > k)
                ++bad;
        int min = bad;
        for (int i = 0, j = dem; j < n; ++i, ++j)
        {
            if (a[i] > k)
                --bad;
            if (a[j] > k)
                ++bad;
            if (min >= bad)
                min = bad;
        }
        cout << min << endl;
    }
}
