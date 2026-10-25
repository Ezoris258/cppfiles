#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll l, r, ans;
vector<int> prime;

void qp(ll n)
{
    vector<bool> is_p(n + 1, true);
    is_p[0] = false;
    is_p[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if (is_p[i])
        {
            prime.push_back(i);
        }

        for (ll p : prime)
        {
            if (p * i > n)
            {
                break;
            }
            is_p[p * i] = false;
            if (!(i % p))
            {
                break;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> l >> r;
    if (r < 2) { cout << 0; return 0; }
    l=l==1?2:l;
    vector<bool>p(r-l+1,true);

    qp(sqrt(r));

    for(ll i:prime){
        for(int k=max((l+i-1)/i,2ll);k*i<=r;k++){
            
            p[i*k-l]=false;
        }

    }
    for(bool j:p){
        if(j) ans++;
    }

    cout << ans;

    return 0;
}