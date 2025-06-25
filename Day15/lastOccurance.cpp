#include<bits/stdc++.h>
using namespace std;

int lastOccurance(vector<int>&v,int val){
    int s = 0;
    int e = v.size()-1;
    int ans = -1;
    while(s <= e){
        int mid = s+(e-s)/2;
        if(v[mid] == val){
            ans = mid;
            s = mid+1;
        }else if(v[mid] > val){
            e = mid-1;
        }else s = mid+1;
    }
    return ans;
}