#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
    vector<int>v;
    public:
    int size(){
        return v.size();
    }
    int isEmpty(){
        return v.size() == 0;
    }
    void push(int val){
        v.push_back(val);
    }
    int pop(){
        if(isEmpty())return -1;
        int e = v.back();
        v.pop_back();
        return e;
    }
    int top(){
        if(isEmpty())return -1;
        return v.back();
    }
};