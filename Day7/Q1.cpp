#include<bits/stdc++.h>
using namespace std;

int absDiff(vector<int>&v){
    int maxi = 0;
    for(int i = 0;i<v.size();i++){
        maxi = max(maxi,abs((v[i] - v[(i+1)%v.size()])));
    }
    return maxi;
}