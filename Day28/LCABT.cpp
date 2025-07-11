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

BTnode* LCA(BTnode*root,BTnode*p,BTnode*q){
    if(!root || root == p || root == q)return root;
    BTnode*l = LCA(root->left,p,q);
    BTnode*r = LCA(root->right,p,q);
    if(l && r){
        return root;
    }else if(!l && r)return r;
    else if(!r && l)return l;

    return NULL;
}