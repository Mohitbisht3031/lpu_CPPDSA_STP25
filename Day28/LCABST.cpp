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

BTnode* LCABST(BTnode*root,BTnode*p,BTnode*q){
    if(!root || root == p || root == q)return root;

    if((root->val >= p->val || root->val < q->val) || (opposite of first)){
        return root;
    }else if(root->val >= p->val && root->val >= q->val)return LCABST(root->left,p,q);
    else return LCABST(root->right,p,q);
    return NULL;
}