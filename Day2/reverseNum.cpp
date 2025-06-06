#include<bits/stdc++.h>
using namespace std;

/*
reverse a given number
*/
// iteration
int reverseNum(int n){
    int nn = 0;
    while(n){
        nn*=10;
        nn+=(n%10);
        n/=10;
    }
    return nn;
}

// recursive
void reverseNumRec(int n,int&rev){
    if(n == 0)return ;
    rev*=10;
    rev+=(n%10);
    reverseNumRec(n/10,rev);
    return;
}

int main(){
    return 0;
}