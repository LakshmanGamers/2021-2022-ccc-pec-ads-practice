#include<bits/stdc++.h>
using namespace std;
int prec(char ch){
    if (ch=='^'){
        return 3;
    }
    else if(ch=='*' || ch=='/'){
        return 2;
    }
    else if(ch=='+' || ch=='-'){
    return 1;
    }
    else{
        return -1;
    }
    
}
string itop(string s){
    stack<int > st;
    string res;
    for(int i=0;i<(int)s.length();i++){
        if((s[i]>='a' && s[i]<='z') ||(s[i]>='a' && s[i]<='z')){
            res+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(st.top()!='(' && !st.empty()){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && prec(s[i])<=prec(st.top())){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
            while(!st.empty()){
            res+=st.top();
            st.pop();
        }

    return res;
}

int main() {
   string s;
    cin >> s;
    cout << itop(s);
    
    return 0;
}
