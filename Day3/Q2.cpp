#include<bits/stdc++.h>
using namespace std;

int lastOccurance(string&str,char&ch){
    int ans = -1;
    for(int i = 0;i<str.size();i++){
        if(str[i] == ch){
            ans = i;
        }
    }
    return ans;
}

// recursive
int lastOccuranceRec(string&str,char&ch,int i){
    if(i>= str.size())return -1;
    int ans = lastOccuranceRec(str,ch,i+1);
    if(ans == -1 && str[i] == ch)ans = i;
    return ans;
}