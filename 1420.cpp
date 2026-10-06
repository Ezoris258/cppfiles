#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,maxn=1;
    cin>>n;
    vector<int> a(n);
    for (int i=0;i < n ;i++){
        cin>>a[i];   
    }
    int ans=1;
    for(int i=1;i<n;i++){
        if(a[i-1]+1==a[i]){
            ans++;
        }
        else {
            ans=1;
        }
        maxn=max(maxn,ans);
    }
    
    cout<<maxn<<'\n';

    return 0;
}