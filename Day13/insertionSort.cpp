#include<bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int>&v){
    for(int i = 1;i<v.size();i++){
        int val = v[i];
        int j = i-1;
        while(i >= 0 && v[j] > val){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = val;
    }
    return;
}