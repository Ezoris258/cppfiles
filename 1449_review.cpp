#include<bits/stdc++.h>
using namespace std;
int temp;
size_t i;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;  cin>>s;
    stack<int> q;
    while (s[i]!='@')
    {
        if(s[i]<='9'&&s[i]>='0')
            temp=temp*10+(s[i]-'0');
        if(s[i]=='.'){
            q.push(temp);
            temp=0;
        }
        if(s[i]=='+'){
            int a,b;
            a=q.top(); q.pop();
            b=q.top(); q.pop();
            q.push(a+b);
        }
        if(s[i]=='-'){
            int a,b;
            a=q.top(); q.pop();
            b=q.top(); q.pop();
            q.push(b-a);
        }if(s[i]=='*'){
            int a,b;
            a=q.top(); q.pop();
            b=q.top(); q.pop();
            q.push(a*b);
        }if(s[i]=='/'){
            int a,b;
            a=q.top(); q.pop();
            b=q.top(); q.pop();
            q.push(b/a);
        }
        i++;
    }

    cout<<q.top()<<'\n';

    return 0;
    

}