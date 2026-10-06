#include<bits/stdc++.h>
using namespace std;
int main(){

    stack <int> a;
    string s;
    cin>>s;
    s=s.substr(0,s.length()-1);

    int sum=0;
    for(int i=0;i<s.length();i++){
        if (s[i]>='0'&&s[i]<='9')
        {
            int temp;
            temp = s[i];
            sum=sum*10+s[i]-'0';
            continue;
        }
        else if(s[i]=='.'){
            a.push(sum);
            sum=0;
            continue;
        }
        else if(s[i]=='+'){
            int x,y;
            x=a.top();  a.pop();
            y=a.top();  a.pop();

            y+=x;  a.push(y);

        }
        else if(s[i]=='-'){
            int x,y;
            x=a.top();  a.pop();
            y=a.top();  a.pop();

            y-=x; a.push(y);
            
            
        }
        else if(s[i]=='*'){
            int x,y;
            x=a.top();  a.pop();
            y=a.top();  a.pop();

            y*=x; a.push(y);
        }
        else if(s[i]=='/'){
            int x,y;
            x=a.top();  a.pop();
            y=a.top();  a.pop();

            y/=x;  a.push(y);
        }

        
        
    }
    
    int res=a.top();
    std::cout<<res;
    

    return 0;
}