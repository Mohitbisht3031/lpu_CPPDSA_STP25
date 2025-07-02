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

bool hasCycle(LLnode*h){
    if(!h)return 0;
    LLnode*t = h;
    unordered_map<LLnode*,int>mp;
    while(t){
        if(mp.count(t))return 1;
        mp[t]++;
        t = t->next;
    } 
    return 0;
}
bool hasCycleWithoutSpace(LLnode*h){
    if(!h)return 0;
    LLnode*s = h;
    LLnode*f = h;
    while(f && f->next){
        s = s->next;
        f = f->next->next;
        if(s == f)return 1;
    }
    return 0;
}

LLnode* returnCyclePoint(LLnode* h){
    if(!h)return h;
    LLnode* s = h;
    LLnode* f = h;
    while(f && f->next){
        s = s->next;
        f = f->next->next;
        if(s == f)break;
    }
    if(f == s){
        s = h;
        while(s != f){
            s=s->next;
            f = f->next;
        }  
    }
    return f;
}