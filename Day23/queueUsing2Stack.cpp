#include<bits/stdc++.h>
using namespace std;

class Queue{
    private:
    stack<int>s1,s2;
    public:
    void push(int e){
        s1.push(e);
    }
    int front(){
        if(size() == 0)return -1;
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
    int pop(){
        if(size() == 0)return -1;
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int t= s2.top();
        s2.pop();
        return t;
    }

    int size(){
        return s1.size()+s2.size();
    }
    bool isEmpty(){
        return size() == 0;
    }
};