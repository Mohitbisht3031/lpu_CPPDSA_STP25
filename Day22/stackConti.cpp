#include<bits/stdc++.h>
using namespace std;

class LLnode{
    public:
    int val;
    LLnode*next;

    LLnode(int val){
        this->val = val;
        this->next = nullptr;
    }
};

class Stack{
    private:
    LLnode*h;
    int c;
    public:
    Stack(){
        this->h = NULL;
        this->c = 0;
    }

    void push(int v){
        LLnode* n =new LLnode(v);
        if(!h){
            h = n;
        }else{
            n->next = h;
            h = n;
        }
        c++;
    }

    int pop(){
        if(!h)return -1;

        c--;
        int v = h->val;
        h = h->next;
        return v;
    }

    int top(){
        if(!h)return -1;
        return h->val;
    }
    int size(){
        return c;
    }

    bool isEmpty(){
        return (size() == 0);
    }
};


