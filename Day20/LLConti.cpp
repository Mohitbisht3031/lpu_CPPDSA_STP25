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

int LenOfLLIterative(LLnode*&h){
    if(!h)return 0;
    LLnode* t = h;
    int c = 0;
    while(t){
        c++;
        t = t->next;
    }
    return c;
}

int LenOfLLRec(LLnode*h){
    if(!h)return 0;
    int nl = LenOfLLRec(h->next);
    return 1+nl;
}


LLnode* middleOfLL(LLnode*&h){
    if(!h)return h;
    int l = LenOfLLIterative(h);
    l = ceil(l/2);
    int i = 1;
    LLnode*t = h;
    for(;i<=l && t;i++){
        t = t->next;
    }
    return t;
}

LLnode* middleOfLLSlowFast(LLnode*&h){
    if(!h)return h;
    LLnode*s = h;
    LLnode*f = h;
    while(!f->next->next){
        if(!f->next)return s;
        s = s->next;
        f = f->next->next;
    }
    return s;
}

LLnode* revIterative(LLnode*h){
    if(!h || !h->next)return h;
    LLnode* prev = nullptr;
    LLnode* curr = h;
    LLnode* n = h->next;
    while(n){
        curr->next = prev;
        prev = curr;
        curr = n;
        n = n->next;
    }
    curr->next = prev;
    return curr;
}

LLnode* revRec(LLnode*h){
    if(!h || !h->next)return h;
    LLnode* nh = revRec(h->next);
    LLnode* t= h->next;
    t->next = h;
    h->next = NULL;
    h = nh;
    return h; 
}