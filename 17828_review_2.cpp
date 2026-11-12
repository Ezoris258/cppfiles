#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN=2e5+5;
ll n,len[MAXN],r_len[MAXN],tot,tar,ans;
char ch[MAXN],r_ch[MAXN];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>len[i]>>ch[i];
        r_len[n-i+1]=len[i];
        r_ch[n-i+1]=ch[i];
        tot+=len[i];
    }

    tar=tot/2;
    ll rem=len[1],r_rem=r_len[1],i=1,j=1,proc=0;
    while (j<=n&&i<=n&&proc<tar) // ? [NOTE] j<=n 非j<=tar
    {
        ll pos=min({rem,r_rem,tar-proc});
        if(ch[i]!=r_ch[j]){
            ans+=pos;
        }
        rem-=pos;
        r_rem-=pos;
        proc+=pos;
        if(rem==0&&++i<=n){
            rem=len[i];
        }
        if(r_rem==0&&++j<=n){
            r_rem=r_len[j];
        }
    }

    cout<<ans;
    

    return 0;
}