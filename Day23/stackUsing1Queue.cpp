#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
    queue<int>q;
    public:
    void push(int e){
        q.push(e);
    }
    int pop(){
        if(q.empty())return -1;
        int s = q.size();
        for(int i = 0;i<s-1;i++){
            q.push(q.front());
            q.pop();
        }
        int e = q.front();
        q.pop();
        return e;
    }
    int top(){
        if(q.empty())return -1;
        int s = q.size();
        for(int i = 0;i<s-1;i++){
            q.push(q.front());
            q.pop();
        }
        int e = q.front();
        q.pop();
        q.push(e);
        return e;
    }
};