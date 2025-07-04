#include<bits/stdc++.h>
using namespace std;

bool redundantPair(string str){
    stack<char>stk;
    string op="+-/*%";
    for(char ch : str){
        if(ch == '(' || op.find(ch) != string::npos){
            stk.push(ch);
        }else{
            bool f = 0;
            while(!stk.empty() && stk.top() != '('){
                f = 1;
                stk.pop();
            }
            if(!f)return 1;
            stk.pop();
        }
    }
    return 0;
}