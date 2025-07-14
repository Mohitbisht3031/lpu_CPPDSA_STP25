#include<bits/stdc++.h>
using namespace std;

int waysToreachTop(int n){
    if( n<=3)return n;
    return waysToreachTop(n-1)+waysToreachTop(n-2);
}

int helper(int n,vector<int>&dp){
    if(n <= 3)return n;
    if(dp[n] != -1)return dp[n];
    return dp[n] = helper(n-1,dp)+helper(n-2,dp);
}

int wayToReachTopDP(int n){
    if(n <= 3)return n;
    vector<int>dp;
    helper(n,dp);
    return dp[n];
}