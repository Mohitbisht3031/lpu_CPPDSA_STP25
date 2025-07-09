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


int height(BTnode*root){
    if(!root)return 0;
    int lh = height(root->left);
    int rh = height(root->right);

    return 1+max(lh,rh);
}

int heightIterative(BTnode* root){
    if(!root)return 0;
    queue<BTnode*>q;
    q.push(root);
    int c = 0;
    while(!q.empty()){
        int s = q.size();
        c++;
        for(int i = 0;i<s;i++){
            BTnode*f =q.front();
            q.pop();
            if(f->left)q.push(f->left);
            if(f->right)q.push(f->right);
        }
    }
    return c;
}

void pre(BTnode*root){
    if(!root)return;
    cout<<root->val<<endl;
    pre(root->left);
    pre(root->right);
}

void in(BTnode*root){
    if(!root)return ;
    in(root->left);
    cout<<root->val<<endl;
    in(root->right);
}

void post(BTnode*root){
    if(!root)return;
    post(root->left);
    post(root->right);
    cout<<root->val<<endl;
}

BTnode* updateTreeNode(BTnode*root){
    if(!root)return 0;
    root->left = updateTreeNode(root->left);
    root->right = updateTreeNode(root->right);
    
    root->val= (root->val + (root->left ? root->left->val : 0) + (root->right ? root->right->val : 0));

    return root;
}

int maxSum(BTnode*root){
    if(!root)return 0;
    int lmax = maxSum(root->left);
    int rmax = maxSum(root->right);
    int s = (root->val + (root->left ? root->left->val : 0) + (root->right ? root->right->val : 0));

    return max({s,lmax,rmax});
}

bool isIdentical(BTnode*r1,BTnode*r2){
    if(!r1 && !r2)return 1;
    if(!r1 || !r2)return 0;
    if(r1->val != r2->val)return 0;
    return isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right);
}

int main(){
    BTnode* root = makeBT();
    printBT(root);

    return 0;
}