#include<bits/stdc++.h>
using namespace std;

int removeVal(vector<int>&v,int val){
    int c = 0;
    for(int i = 0;i<v.size();i++){
        if(v[i] == val)c++;
        else v[i-c] = v[i];
    }
    return v.size() - c;
}