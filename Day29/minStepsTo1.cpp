#include<bits/stdc++.h>
using namespace std;

int minsteps(int n){
    if(n <= 1)return 0;
    int res = INT_MAX;
    res = minsteps(n-1)+1;
    if(n%2 == 0){
        res = min(res,minsteps(n/2)+1);
    }
    if(n%3 == 0){
        res = min(res,minsteps(n/3)+1);
    }
    return res;
}

int helper(int n,vector<int>&dp){
    if(n <= 1)return 0;
    if(dp[n] != -1)return dp[n];
    int res = INT_MAX;
    res = minsteps(n-1)+1;
    if(n%2 == 0){
        res = min(res,minsteps(n/2)+1);
    }
    if(n%3 == 0){
        res = min(res,minsteps(n/3)+1);
    }
    return dp[n] = res;
}