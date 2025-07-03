#include<bits/stdc++.h>
using namespace std;

bool check(char ch1, char ch2){
    return (ch1 == '(' && ch2 == ')') || (ch1 == '{' && ch2 == '}') || (ch1 == '[' && ch2 == ']');
}

bool validParan(string str){
    stack<char>stk;
    for(char ch : str){
        if(ch == '(' || ch == '{' || ch == '['){
            stk.push(ch);
        }else{
            if(stk.empty() || !check(stk.top(),ch))return 0;
            else stk.pop();
        }
    }
    return 1;
}