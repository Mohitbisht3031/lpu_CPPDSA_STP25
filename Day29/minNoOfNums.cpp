#include<bits/stdc++.h>
using namespace std;

int helper(int n,vector<int>&dp){
    if(n <= 3)return n;

    if(dp[n] != -1)return dp[n];

    int res = n;
    for(int i = 1;i<=n;i++){
        if(i*i > n)break;
        res = min(res,helper(n-(i*i),dp)+1);
    }
    return dp[n] = res;
}