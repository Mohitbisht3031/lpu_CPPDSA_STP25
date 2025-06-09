#include<bits/stdc++.h>
using namespace std;

// interative
int firstOccurance(string str,char&ch){
    for(int i = 0;i<str.size();i++){
        if(str[i] == ch)return i;
    }
    return -1;
}

// recursion
/*
1. Base
2. recursive call
3. my part
*/
int helper(string &str,char&ch,int i){
    if(i >= str.size())return -1;
    if(str[i] == ch)return i;
    return helper(str,ch,i+1);
}
int firstOccuranceRec(string str,char&ch){
    return helper(str,ch,0);
}

int main(){
    return 0;
}