#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[8] = {1, 2, 2, 4, 4, 4, 7, 9};
    auto pos = lower_bound(a, a + 8, 4) -a; //TODO [TODO]减去 a 得到下标
    cout<<pos;

    return 0;
}