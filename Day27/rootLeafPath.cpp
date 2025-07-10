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

void helper(BTnode*root,string s,vector<string>&ans){
    if(!root)return;
    if(!root->left && !root->right){
        ans.push_back(s+to_string(root->val));
        return ;
    }
    helper(root->left,s+to_string(root->val),ans);
    helper(root->right,s+to_string(root->val),ans);
    return;
}

vector<string> rootLeafPath(BTnode* root){
    if(!root)return {};
    string path="";
    vector<string>ans;
    helper(root,path,ans);
    return ans;
}