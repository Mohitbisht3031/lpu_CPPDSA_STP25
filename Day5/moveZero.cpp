#include<bits/stdc++.h>
using namespace std;

int* moveZero(int arr[]){
    int s = sizeof(arr)/sizeof(int);
    int narr[s];
    int j = 0;
    for(int i = 0;i<s;i++){
        if(arr[i] != 0){
            narr[j++] = arr[i];
        }
    }
    return narr; 
}

int* moveZeroNew(int arr[]){
    int s = sizeof(arr)/sizeof(int);
    int c = 0;
    for(int i = 0;i<s;i++){
        c+=(arr[i] == 0 ? 1 : 0);
        if(arr[i])arr[i-c] = arr[i];
    }
    for(int i = s-c;i<s;i++)arr[i] = 0;
    return arr;
}

int main(){
    return 0;
}