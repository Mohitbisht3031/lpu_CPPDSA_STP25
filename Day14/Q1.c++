#include<bits/stdc++.h>
using namespace std;

int inversionCount(vector<int>&v){
    int c = 0;
    for(int i = 0;i<v.size();i++){
        for(int j = i+1;j<v.size();j++){
            if(v[i] > v[j])c++;
        }
    }
    return c;
}

// implement as an hw
int merge(vector<int>&v,int s,int e){

}

int inversionCountMerge(vector<int>&v,int s,int e){
    if(s >= e)return 0;
    int mid = s+(e-s)/2;
    int c = inversionCountMerge(v,s,mid);
    c+=inversionCountMerge(v,mid+1,e);
    c+=merge(v,s,e);

    return c;
}