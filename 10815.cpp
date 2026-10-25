#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll k,ans=0,temp;  
    scanf("%lld",&k);

    for(ll i=0;i<k;i++){
        scanf("%lld",&temp);
        ans+=temp;
    }

    printf("%lld",ans);

    return 0;
}