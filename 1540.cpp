#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);    

    int m,n,t=1;
    cin>>m>>n;
    queue<int> memory;
    int tem;
    cin>>tem;
    memory.push(tem);

    for(int i=1;i<n;i++){
        int word;
        cin>>word;

        bool init;
        for(int j=0;j<memory.size();j++){
             init=false;
             int head=memory.front();
            if(memory.front()==word){
                init=!init;
                
            }
            else{
                int temp=memory.front();
                memory.pop();
                memory.push(temp);
            }
                        
        }

        if(!init){
            memory.push(word);
            t++;
        }
        if( memory.size()>m){
                memory.pop();
        }

    }

    std::cout<<t;

    return 0;
}