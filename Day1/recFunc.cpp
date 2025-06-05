#include<bits/stdc++.h>
using namespace std;

/*
1. Base case
2. recursive call
3. my part
2 <-> 3
*/
int digits(int n){
    // base case
    if(n >= 0 && n <= 9)return 1;
    // recursive call
    int ans = digits(n/10);
    // my part
    return ans+1;
}

int main(){
    cout<<digits(121234214)<<endl;
    return 0;
}