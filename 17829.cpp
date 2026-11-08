#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a;
    a.reserve(n);
    while (n--)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    long long ans = 0;
    for (int b = 29; b >= 0; b--)
    {
        ans = ans | (1LL << b);
        int cnt = 0;
        for (int i : a)
        {
            if ((i & ans) == ans)
            {
                cnt++;
            }
        }
        if (cnt < m)
        {
            ans ^= (1LL << b);
        }
    }

    cout << ans;

    return 0;
}