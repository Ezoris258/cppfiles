#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  cin>>n;
    
    priority_queue<int ,vector<int>,greater<int>> pq;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a;
        if(a==1){
            cin>>b;
            pq.push(b);
        }
        if(a==2){
            cout<<pq.top()<<'\n';
        }
        if(a==3){
            pq.pop();
        }
    }

    return 0;
}