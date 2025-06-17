#include<bits/stdc++.h>
using namespace std;

// brute force
int maxDiff(vector<int>&arr){
    int maxi = 0;
    for(int i = 0;i<arr.size();i++){
        for(int j = i+1;j<arr.size();j++){
            if(arr[i] < arr[j])maxi = max(maxi,arr[j]-arr[i]);
        }
    }
    return maxi;
}

// optimized
int maxDiffOpt(vector<int>&arr){
    int maxi = 0;
    int mini = arr[0];
    for(int i = 1;i<arr.size();i++){
        maxi = max(maxi , arr[i] - mini);
        mini = min( mini,arr[i]);
    }
    return maxi;
}