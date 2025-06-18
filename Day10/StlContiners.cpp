#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>l;
    l.push_back(1);
    l.push_front(2);
    l.push_back(3);
    cout<<l.size()<<endl;
    // for(int e : l){
    //     cout<<e<<endl;
    // }
    // sort(l.begin(),l.end());
    l.sort();
    
    // for(int e : l){
    //     cout<<e<<endl;
    // }

    l.pop_back();
    l.pop_front();

    queue<int>q;
    q.push(1);
    q.front();
    q.pop();
    cout<<q.size()<<endl;

    stack<int>stk;
    stk.push(1);
    stk.push(2);
    stk.top();
    cout<<stk.size()<<endl;

    // set
    cout<<endl;
    unordered_set<int>st;
    st.insert(2);
    st.insert(2);
    st.insert(2);
    st.insert(2);
    st.insert(1);
    st.insert(1);
    st.insert(3);

    for(int e : st)cout<<e<<endl;

    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    cout<<st.count(4)<<endl;

    // map
    unordered_map<string,int>mp;
    mp["Mohit"] = 1;
    mp["palak"] = 2;
    mp["harshit"] = 3;

    for(auto e : mp){
        cout<<e.first<<" "<<e.second<<endl;
    }
    cout<<mp.size()<<endl;
    cout<<mp.count("jaskaran")<<endl;
    cout<<mp["Mohit"]<<endl;
}