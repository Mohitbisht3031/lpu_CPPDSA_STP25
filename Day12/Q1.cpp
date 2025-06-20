#include<bits/stdc++.h>
using namespace std;

bool checkAna(string s1,string s2){
    vector<int>freq(26,0);
    for(int i = 0;s1.size();i++)freq[s1[i] - 'a']++;
    for(int i = 0;s1.size();i++)freq[s2[i] - 'a']--;

    for(int i = 0;i<26;i++)if(freq[i] > 0)return 0;
    return 1;
}

vector<vector<string>> anagram(vector<string>&s){
    vector<vector<string>>ans;
    for(int i = 0;i<s.size();i++){
        vector<string>v;
        for(int j = 0;j<s.size();j++){
            if(i!=j){
                if((s[i].size() == s[j].size())&&checkAna(s[i],s[j]))v.push_back(s[j]);
            }
        }
        ans.push_back(v);
    }
    return ans;
}

vector<vector<string>> anagramOpt(vector<string>&s){
    unordered_map<string,vector<string>>mp;
    for(int i = 0;i<s.size();i++){
        string key = s[i];
        sort(key.begin(),key.end());
        mp[key].push_back(s[i]);
    }
    vector<vector<string>>ans;
    for(auto e : mp){
        ans.push_back(e.second);
    }
    return ans;
}