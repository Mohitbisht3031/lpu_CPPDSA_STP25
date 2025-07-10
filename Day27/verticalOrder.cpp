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

void helper(BTnode*root,int ind,map<int,vector<int>>&mp){
    if(!root)return;
    mp[ind].push_back(root->val);
    helper(root->left,ind-1,mp);
    helper(root->right,ind+1,mp);
    return ;
}

vector<vector<int>> verticalOrder(BTnode* root){
    if(!root)return {};
    map<int,vector<int>>mp;
    helper(root,0,mp);
    vector<vector<int>>ans;
    for(auto m : mp){
        ans.push_back(m.second);
    }
    return ans;
}