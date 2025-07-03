#include<bits/stdc++.h>
using namespace std;

string removeSame(string str){
    stack<char>stk;
    for(char ch : str){
        if(!stk.empty()){
            if(stk.top() != ch)stk.push(ch);
            else stk.pop();
        }else{
            stk.push(ch);
        }
    }
    string ans ="";
    while(!stk.empty()){
        ans+=stk.top();
        stk.pop();
    }
    return ans;
}