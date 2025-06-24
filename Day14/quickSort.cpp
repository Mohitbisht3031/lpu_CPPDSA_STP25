#include<bits/stdc++.h>
using namespace std;

int helper(vector<int>&v,int s,int e){
    if(s >= e)return s;
    int c = 1;
    for(int i =s+1;i<e;i++){
        if(v[s]>v[i])c++;
    }
    swap(v[s],v[s+c]);
    int i = s;
    int j = e;
    while(i <= s+c && j>= s+c){
        if(v[i] > v[s+c] && v[j] <= v[s+c]){
            swap(v[i],v[j]);
            i++;
            j--;
        }else if(v[i] <= v[s+c])i++;
        else j--;
    }

    return s+c;
}

void qs(vector<int>&v,int s,int e){
    if(s >= e)return;
    int p = helper(v,s,e);
    qs(v,s,p);
    qs(v,p+1,e);
}