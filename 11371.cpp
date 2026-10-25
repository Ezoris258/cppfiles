#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{

    ll n, k, ma = 0, ans = 0, temp, fst, sum = 0;
    cin >> n >> k;

    for (ll i = 1; i <= n; i++)
    {
        cin >> temp;
        i == 1 ? fst = temp : 1;
        ma = max(ma, temp);
        if (temp % k != fst % k)
        {
            cout << "NO" << '\n';
            return 0;
        }
        sum += temp;
        ans = (ma * i - sum) / k;// !
    }
    cout << "YES " << ans << '\n';
    return 0;
}