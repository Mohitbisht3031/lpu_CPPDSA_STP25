#include<bits/stdc++.h>
using namespace std;

class BTnode{
    public:
    int val;
    BTnode*left;
    BTnode*right;
    BTnode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

BTnode* makeBT(){
    int v;
    cout<<"Give the value of the node"<<endl;
    cin>>v;
    if(v == -1)return NULL;
    BTnode* root = new BTnode(v);
    cout<<"insert the left node of the "<<v<<" node"<<endl;
    root->left = makeBT();
    cout<<"insert the right node of the "<<v<<" node"<<endl;
    root->right = makeBT();
    return root;
}

void printBT(BTnode*root){
    if(!root)return;
    cout<<root->val<<endl;
    printBT(root->left);
    printBT(root->right);
    return;
}

BTnode* makeBTIteration(){
    int v;
    cin>>v;
    if(v == -1)return NULL;
    BTnode*root = new BTnode(v);
    queue<BTnode*>q;
    q.push(root);

    while(!q.empty()){
        BTnode*f = q.front();
        q.pop();
        cout<<"insert left and right child of "<<f->val<<endl;
        int l,r;
        cin>>l>>r;
        if(l!=-1){
            f->left = new BTnode(l);
            q.push(f->left);
        }
        if(r!=-1){
            f->right = new BTnode(r);
            q.push(f->right);
        }
    }
    return root;
}

void printBTIterative(BTnode*root){
    if(!root)return;
    queue<BTnode*>q;
    q.push(root);
    while(!q.empty()){
        BTnode*f = q.front();
        q.pop();
        cout<<f->val<<"->";
        if(f->left){
            cout<<f->left->val<<",";
            q.push(f->left);
        }else cout<<"null, ";
        if(f->right){
            cout<<f->right->val<<", ";
            q.push(f->right);
        }else cout<<"null, ";
        cout<<endl;
    }
    return;
}

int main(){
    BTnode* root = makeBT();
    printBT(root);

    return 0;
}