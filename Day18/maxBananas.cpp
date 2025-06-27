#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>&v,int s,int h){
    int t = 0;
    for(int e : v){
        t+=(e/s);
        if(t > h)return 0;
    }
    return 1;
}

int minBananaSpeed(vector<int>&v,int h){
    if(h == 1)return accumulate(v.begin(),v.end(),0);
    int s = 1;
    int e = *max_element(v.begin(),v.end());
    int ans = INT_MAX;
    while(s <= e){
        int mid = s+(e-s)/2;
        if(check(v,mid,h)){
            ans = min(ans,mid);
            e = mid-1;
        }else s = mid+1;
    }
    return ans;
}