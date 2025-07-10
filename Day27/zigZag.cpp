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

vector<string> zigzag(BTnode*root){
    if(!root)return {};
    stack<BTnode*>s1;
    stack<BTnode*>s2;
    vector<string>ans;
    while(!s1.empty() && !s2.empty()){
        string s = "";
        while(!s1.empty()){
            BTnode* t = s1.top();
            s1.pop();
            s+=to_string(t->val);
            if(t->left)s2.push(t->left);
            if(t->right)s2.push(t->right);
        }
        ans.push_back(s);
        s="";
        while(!s2.empty()){
            BTnode* t = s2.top();
            s2.pop();
            s+=to_string(t->val);
            if(t->right)s1.push(t->right);
            if(t->left)s1.push(t->left);
        }
        ans.push_back(s);
    }
    return ans;
}