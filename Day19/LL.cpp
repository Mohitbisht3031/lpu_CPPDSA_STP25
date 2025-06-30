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

LLnode* makeLL(){
    int v;
    cin>>v;
    if(v == -1)return NULL;
    LLnode* h = NULL;
    LLnode* t = NULL;    
    while(v != -1){
        if(h == NULL){
            h = new LLnode(v);
            t = h;
        }else{
            t->next = new LLnode(v);
            t = t->next;
        }
        cin>>v;
    }
    return h;
}

void print(LLnode* h){
    if(h == NULL)return;
    LLnode* t = h;
    while(t){
        cout<<t->val<<"->";
        t = t->next;
    }
    cout<<"Null"<<endl;
}
void insertAtLast(LLnode*&h,int v){
    if(h == NULL){h = new LLnode(v);
    return ;}
    LLnode*t = h;
    while(t->next){
        t = t->next;
    }
    t->next = new LLnode(v);
    return;
}

void deleteAtLast(LLnode*&h){
    if(h == NULL)return;
    if(!h->next){
        delete h;
        h = NULL;
    }
    LLnode* t = h;
    while(t->next->next){
        t = t->next;
    }
    LLnode*l = t->next;
    t->next = NULL;
    delete l;
    return;
}

void insertAtInd(LLnode*&h,int ind,int v){
    if(ind == 0){
        LLnode* nh = new LLnode(v);
        nh->next = h;
        h = nh;
        return;
    }
    LLnode*t = h;
    int i= 0;
    for(;i<ind-1 && t;i++){
        t = t->next;
    } 
    if(i == ind-1){
        LLnode * nn = new LLnode(v);
        nn->next = t->next;
        t->next = nn;
    }
    return ;
}

int main(){
    LLnode* h = makeLL();
    print(h);
    // insertAtLast(h, 10);
    // print(h);
    // deleteAtLast(h);
    // print(h);
    insertAtInd(h,2,10);
    print(h);
}