#include<bits/stdc++.h>
using namespace std;

int makeitValid(string str){
    stack<char>stk;
    for(char ch : str){
        if(ch == '(')stk.push(ch);
        else {
            if(!stk.empty() && stk.top() == '(')stk.pop();
            else stk.push(ch);
        }
    }

    int ans = 0;
    while(!stk.empty()){
        char ch1 = stk.top();
        stk.pop();
        char ch2 = stk.top();
        stk.pop();
        if(ch1 == ch2)ans++;
        else ans+=2;
    }

    return ans;
}