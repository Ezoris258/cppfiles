#include<bits/stdc++.h>
using namespace std;
int main(){

    stack <char> a;
    
    while (1)
    {
        char t;
        cin>>t;
        a.push(t);

        if(a.top()=='.')  a.pop();
        if(a.top()=='@'){
            a.pop();
            break;
        }
        
        if(a.top()=='+'){
            int x,y;
            a.pop();
            x=a.top()-'0'; a.pop();
            y=a.top()-'0'; a.pop();
            y+=x+'0'; a.push(y);
            
        }

        if(a.top()=='-'){
            int x,y;
            a.pop();
            x=a.top()-'0'; a.pop();
            y=a.top()-'0'; a.pop();
            y-=x+'0'; a.push(y);
            
        }

        if(a.top()=='*'){
            int x,y;
            a.pop();
            x=a.top()-'0'; a.pop();
            y=a.top()-'0'; a.pop();
            y*=x+'0'; a.push(y);
            
        }

        if(a.top()=='/'){
            int x,y;
            a.pop();
            x=a.top()-'0'; a.pop();
            y=a.top()-'0'; a.pop();
            y/=x+'0'; a.push(y);
            
        }
        
    }

    int ans=a.top()-'0';
    cout<<ans<<'\n';
    
    

    return 0;
}