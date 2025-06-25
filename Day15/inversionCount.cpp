#include<bits/stdc++.h>
using namespace std;

int merge(vector<int>&v,int s,int e){
    if(s >= e)return 0;

    int mid = s+(e-s)/2;
    int i = s;
    int j = mid+1;
    int c =0;
    vector<int>ans;
    while(i <= mid && j <= e){
        if(v[i] > v[j]){
            c+=(mid-i);
            ans.push_back(v[j]);
            j++;
        }else if(v[i] <= v[j]){
            ans.push_back(v[i]);
            i++;
        }
    }
    while(i <= mid){
        ans.push_back(v[i]);
        i++;
    }

    while(j <= e){
        ans.push_back(v[j]);
        j++;
    }
    v = ans;
    return c;
}

int inversionCountMerge(vector<int>&v,int s,int e){
    if(s >= e)return 0;
    int mid = s+(e-s)/2;
    int c = inversionCountMerge(v,s,mid);
    c+=inversionCountMerge(v,mid+1,e);
    c+=merge(v,s,e);

    return c;
}