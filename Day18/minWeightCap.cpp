#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>&v,int wtCap,int d){
    int wt = 0;
    for(int e :v){
        if(wt+e > wtCap){
            d--;
            wt = e;
        }else wt+=e;
    }
    return d >= 0;
}

int minWeightCap(vector<int>&v,int d){
    int s = *max_element(v.begin(),v.end());
    int e = accumulate(v.begin(),v.end(),0);
    int ans = -1;
    while(s <= e){
        int mid = s+(e-s)/2;
        if(check(v,mid,d)){
            ans = mid;
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return ans;
}