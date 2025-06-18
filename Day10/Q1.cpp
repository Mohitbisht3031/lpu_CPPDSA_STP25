#include<bits/stdc++.h>
using namespace std;

vector<int> addOne(vector<int>&v){
    vector<int>ans;
    int c = 1;
    for(int i = v.size()-1;i>=0;i--){
        int ds = c+v[i];
        c = ds/10;
        // v[i] = ds%10;
        ans.push_back(ds%10);
    }

    if(c > 0)v.push_back(c);
    reverse(v.begin(),v.end());
    return v;
}