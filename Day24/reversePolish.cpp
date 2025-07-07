#include<bits/stdc++.h>
using namespace std;

string expression(string str){
    stack<char>stk;
    string ans = "";
    for(int i =0;i<str.size();i++){
        if(str[i] == '('){
            stk.push(str[i]);
        }else if(str[i] == ')'){
            while(!stk.empty() && stk.top() != '('){
                ans+=stk.top();
                stk.pop();
            }
            stk.pop();
        }else{
            while(!stk.empty() && prec(stk.top(),str[i])){
                ans+=stk.top();
                stk.pop();
            }
            stk.push(str[i]);
        }
    }
    return ans;
}