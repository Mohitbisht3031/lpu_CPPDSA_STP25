#include<bits/stdc++.h>
using namespace std;

void moveMatZero(vector<vector<int>>&mat){
    vector<int>r(mat.size(),0);
    vector<int>c(mat[0].size(),0);
    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
            if(mat[i][j] == 0){
                r[i] = 1;
                c[j] = 1;
            }
        }
    }

    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
            if(r[i] == 1 || c[i] == 1)mat[i][j] = 0;
        }
    }
}