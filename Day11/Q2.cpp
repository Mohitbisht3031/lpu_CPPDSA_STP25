#include<bits/stdc++.h>
using namespace std;

int maxiFreqElement(vector<int>&v){
    int c = 0;
    int e = -1;
    for(int i = 0;i<v.size();i++){
        int co = 0;
        for(int j = 0;j<v.size();j++){
            if(v[i] == v[j])co++;
        }
        if(c < co){
            c = co;
            e = v[i];
        }
    }
    return e;
}

int maxWithMap(vector<int>&v){
    unordered_map<int,int>mp;
    for(int i =0;i<v.size();i++){
        mp[v[i]]++;
    }
    int maxi = 0;
    int e = -1;
    for(auto m :mp){
        if(m.second > maxi){
            maxi = m.second;
            e = m.first;
        }
    }
    return e;
}