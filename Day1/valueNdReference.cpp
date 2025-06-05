#include<bits/stdc++.h>
using namespace std;

// pass by value
void increment(int num){
    num++;
    return;
}

// pass by reference
void increment2(int &num){
    num++;
    return ;
}

int main(){
    int n = 1;
    increment(n);
    cout<<n<<endl;
    increment2(n);
    cout<<n<<endl;
    return 0;
}