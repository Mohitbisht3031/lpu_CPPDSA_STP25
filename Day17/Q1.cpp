#include<bits/stdc++.h>
using namespace std;

int sqrt(int x){
    if(x <= 3)return 1;
    int s = 1;
    int e = x/2;
    int ans = -1;
    while(s <= e){
        int mid = s+(e-s)/2;
        if(mid*mid <= x){
            ans = mid;
            s = mid+1;
        }else e = mid-1;
    }
    return ans;
}