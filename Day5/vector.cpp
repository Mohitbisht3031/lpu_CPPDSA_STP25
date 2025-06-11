#include<bits/stdc++.h>
using namespace std;

int main(){
    // Declare an array with 0 size
    vector<int>v;
    cout<<v.size()<<endl;
    v.push_back(5);
    v.push_back(1);
    v.push_back(1);
    // cout<<v.size()<<endl;
    // v.pop_back();
    // v.pop_back();
    // cout<<v.size()<<endl;

    cout<<v[0]<<endl;

    // Declare an vector of a specific size
    vector<int>v2(5);
    cout<<v2.size()<<endl;

    // vector with specific values
    vector<int>v3 = {1,2,3,4,5};
    cout<<v3[2]<<endl;
    return 0;
}