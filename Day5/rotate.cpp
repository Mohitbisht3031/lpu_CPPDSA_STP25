#include<bits/stdc++.h>
using namespace std;

int* rotate(int arr[],int r){
    int s = sizeof(arr)/sizeof(int);
    int narr[s];
    for(int i = 0;i<s;i++){
        narr[(i+r)%s] = arr[i];
    }
    return narr;
}