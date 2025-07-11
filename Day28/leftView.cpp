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

void helper(BTnode* root,vector<int>&ans,int l){
    if(!root)return ;
    if(l == ans.size()){
        ans.push_back(root->val);
    }
    helper(root->left,ans,l+1);
    helper(root->right,ans,l+1);
    return;
}

vector<int> leftView(BTnode* root){
    if(!root)return {};
    vector<int>ans;
    helper(root,ans,0);
    return ans;
}