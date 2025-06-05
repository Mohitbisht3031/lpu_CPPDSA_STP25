#include<bits/stdc++.h>
using namespace std;

int max(int a,int b){
    return (a > b ? a : b);
}

/*
function overloading is a process that allow us to keep same sign of a function 
but need to change
1. No. of params
2. type of params
3. both
*/
int max(int a,int b,int c){
    return max(a,max(b,c));
}

int max(int a,int b,int c,int d){
    return max(a,max(b,c,d));
}

int maxD(int a,int b,int c = 0,int d = 0){
    return max(a,max(b,c,d));
}

int main(){
    cout<<maxD(1,2)<<endl;
    return 0;
}