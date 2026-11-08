#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n,m;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>m;
    vector<ll> cards(n+2,0),last(n+2,0),ans(m+1,0),nxt(n+2,0);
    for(ll i=1;i<=n;i++){
        cin>>cards[i];
        last[cards[i]]=i;
    
    }

    for(ll i=1;i<=n;i++){
        ll pos=last[cards[i]];
        ans[cards[pos]]++;
        while (last[cards[pos+1]]>pos+1)
        {
            ans[cards[pos+1]]++;
            pos=last[cards[pos+1]];
        }
        while (pos<=n)
        {
            ans[cards[++pos]]++;
        }
        
        
    }

    for(ll i=1;i<=m;i++){
        cout<<ans[i]<<' ';
    }

    return 0;
}