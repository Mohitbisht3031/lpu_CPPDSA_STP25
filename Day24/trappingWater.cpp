#include<bits/stdc++.h>
using namespace std;

void makeLeft(vector<int>&lmax,vector<int>&h){
    lmax[0] = -1;
    for(int i = 1;i<h.size();i++){
        lmax[i] = max(lmax[i-1],h[i-1]);
    }
    return ;
}

void makeRight(vector<int>&rmax,vector<int>&h){
    rmax[h.size()-1] = -1;
    for(int i = h.size()-2;i>=0;i--){
        rmax[i] = max(rmax[i+1],h[i+1]);
    }
    return;
}

int trappingWater(vector<int>&h){
    vector<int>lmax(h.size());
    vector<int>rmax(h.size());
    makeLeft(lmax,h);
    makeRight(rmax,h);

    int ans = 0;
    for(int i = 1;i<h.size();i++){
        int v =min(lmax[i],rmax[i])-h[i];
        ans+=(v< 0 ? 0 : v);
    }

    return ans;
}

int trappingWaterOptimized(vector<int>&h){
    int l = 0;
    int r = h.size()-1;
    int ans = 0;
    int lmax = 0;
    int rmax = 0;
    while(l < r){
        lmax = max(h[l],lmax);
        rmax = max(h[r],rmax);
        if(lmax < rmax){
            ans+=lmax - h[l];
            l++;
        }else{
            ans+=rmax - h[r];
            r--;
        }
    }
    return ans;
}