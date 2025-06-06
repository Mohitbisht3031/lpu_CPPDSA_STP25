#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int*ptr = &a;
    cout<<ptr<<" "<<(ptr+1)<<endl;
    // cout<<*ptr<<endl;
    // *ptr = 12; // a = 12
    // cout<<*ptr<<endl; 

    // double b = 10.11;
    // double*ptr2 = &b;

    // if(sizeof(ptr) == sizeof(ptr2)){
    //     cout<<"same"<<endl;
    // }else cout<<"not same"<<endl;

    return 0;
}