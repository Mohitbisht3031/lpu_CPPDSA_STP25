#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&v){
    for(int i = 0;i<v.size()-1;i++){
        int ci = i;
        for(int j = i+1;j<v.size();i++){
            if(v[j] < v[ci]){
                ci = j;
                swap(v[ci],v[i]);
            }
        }
    }
    return ;
}