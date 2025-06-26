#include<bits/stdc++.h>
using namespace std;

int kokoSpeed(vector<int>&p,int h){
    int lo = 1;
    int hi = accumulate(p.begin(),p.end(),0);

    for(int i=lo;i<=hi;i++){
        if(check(i,p,h))return i;
    }
    return -1;
}