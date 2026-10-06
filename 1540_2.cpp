#include<bits/stdc++.h>
using namespace std;

bool init[1010]={false};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);    

    int m,n,t=1;
    cin>>m>>n;
    queue<int> memory;
    int tem;
    cin>>tem;
    memory.push(tem);
    init[tem]=true;

    for(int i=1;i<n;i++){
        int word;
        cin>>word;

        if(init[word])  continue;
        else{
            init[word]=true;
            memory.push(word);
            t++;
        }

        
        if( memory.size()>m){
            int temp=memory.front();
            memory.pop();
            init[temp]=false;
        }

    }

    std::cout<<t;

    return 0;
}