#include<bits/stdc++.h>
using namespace std;

bool init[1005]={false};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,tot=1;  cin>>m>>n;

    queue <int> mem;
    int a;  cin>>a; mem.push(a);  init[a]=true;

    for(int i=1;i<n;i++){
        int temp; cin>>temp;
        if(init[temp]) continue;
        else {
        mem.push(temp);
        tot++;
        init[temp]=true;
        }
        if(mem.size()>m){
            init[mem.front()]=false;
            mem.pop();
        }
    }

    cout<<tot<<'\n';

    return 0;

}