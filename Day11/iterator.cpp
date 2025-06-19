#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string>v = {"Mohit","Jaskaran","Palak","Tejas"};

    vector<string>::iterator i = v.begin();
    vector<string>::iterator j = v.begin()+3;

    // advance(i,2);
    cout<<*i<<endl;
    cout<<distance(i,j)<<endl;
    i = next(i,2);
    cout<<*i<<endl;
    i = prev(i,1);
    cout<<*i<<endl;
    // for(i=v.begin();i!=v.end();i++){
    //     cout<<*i<<endl;
    // }

}