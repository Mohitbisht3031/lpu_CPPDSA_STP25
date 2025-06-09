#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    int** ptr2 = &ptr;
    int*** ptr3 = &ptr2;
    cout<<***ptr3<<endl;
    return 0;
}