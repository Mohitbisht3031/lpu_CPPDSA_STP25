#include<bits/stdc++.h>
using namespace std;

class minStack{
    private:
    stack<int>stk;
    int minV = -1;
    public:
    void push(int e){
        if(stk.empty()){
            minV = e;
            stk.push(e);
        }else{
            if(minV > e){
                stk.push(minV);
                stk.push(e);
                minV = e;
            }else stk.push(e);
        }
    }

    int pop(){
        if(stk.empty())return -1;
        int ans = -1;
        if(stk.top() == minV){
            ans = stk.top();
            stk.pop();
            minV = stk.top();
            stk.pop();
        }else{
            ans = stk.top();
            stk.pop();
        }
        return ans;
    }

    int getMin(){
        return minV;
    }

};