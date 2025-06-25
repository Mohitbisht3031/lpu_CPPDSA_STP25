#include<bits/stdc++.h>
using namespace std;

int sqrt(int x){
    int ans = -1;
    for(int i = 1;i<=x/2;i++){
        ans = i;
        if(i*i == x)break;
    }
    return ans;
}