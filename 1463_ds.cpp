#include <iostream>
using namespace std;

typedef long long ll;

int n;
ll best_num = 1;
ll best_cnt = 1;

int primes[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

void dfs(int u, ll num, ll cnt, int last_p)
{
    if (u >= 10 || num > n)
        return;

    if (cnt > best_cnt || (cnt == best_cnt && num < best_num))
    {
        best_cnt = cnt;
        best_num = num;
    }

    for (int i = 1; i <= last_p; i++)
    {
        if (num * primes[u] > n)
            break;

        num *= primes[u];
        cnt *= (i + 1);

        dfs(u + 1, num, cnt, i);

        cnt /= (i + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    dfs(0, 1, 1, 30);

    cout << best_num << "\n";

    return 0;
}