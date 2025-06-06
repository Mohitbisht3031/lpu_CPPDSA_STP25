#include<bits/stdc++.h>
using namespace std;
/*
given an int number return the sum of it's digit
*/
// iterative 
int digitSum(int n){
    int s = 0;
    while(n){
        s+=(n%10);
        n/=10;
    }
    return s;
}

// Recursion
int digitSumRec(int n){
    if(n == 0)return 0;
    int s = digitSumRec(n/10);
    return s+n%10;
}

int main(){
    int n;
    cin>>n;
    digitSum(n);
    return 0;
}