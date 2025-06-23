#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&v,int s,int e){
    if(s >= e)return;
    int mid = s+(e-s)/2;
    vector<int>ans;
    int i = s;
    int j = mid+1;
    while(i <= mid && j <= e){
        if(v[i] <= v[j]){
            ans.push_back(v[i]);
            i++;
        }else{
            ans.push_back(v[j]);
            j++;
        }
    }
    v = ans;
    return;
}

void mergeSort(vector<int>&v,int s,int e){
    if( s >= e)return ;

    int mid = s+(e-s)/2;
    mergeSort(v,s,mid);
    mergeSort(v,mid+1,e);
    merge(v,s,e);
}