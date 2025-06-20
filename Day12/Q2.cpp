#include<bits/stdc++.h>
using namespace std;

class RandomDS{
    private:
    vector<int>v;
    unordered_map<int,int>mp;
    public:
    bool insert(int val){
        if(mp.count(val))return 0;
        v.push_back(val);
        mp[val] = v.size()-1;
        return 1;
    }
    bool remove(int val){
        if(mp.count(val) == 0)return 0;
        int l = v.back();
        mp[l] = mp[val];
        v[mp[val]] = l;
        v.pop_back();
        return 1;
    }

    int getRandom(){
        int i = rand()%v.size();
        return v[i];
    }

};