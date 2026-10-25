#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> p;

void qp(ll n)
{
    vector<bool> is_pr(n + 1, true);
    is_pr[1] = false;
    is_pr[0] = false;

    for (ll i = 2; i <= n; i++)
    {
        if (is_pr[i])
        {
            p.push_back(i);
        }
        for (int j : p)
        {
            if (i * j > n)
                break;
            is_pr[i * j] = false;
            if (!i % j)
                break;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    qp(n);

    for (int i = 0; i < k; i++)
    {
        int a;
        cin >> a;
        cout << p[a - 1] << '\n';
    }

    return 0;
}