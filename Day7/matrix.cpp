#include<bits/stdc++.h>
using namespace std;

class Matrix{
    public:
    vector<vector<int>>v;
    Matrix(int r,int c){
        v = vector<vector<int>>(r,vector<int>(c));
        cout<<"Please give us the values of the matrix: "<<endl;
        for(int i = 0;i<v.size();i++){
            for(int j = 0;j<v[i].size();j++){
                cin>>v[i][j];
                cout<<",";
            }
            cout<<endl;
        }

        void display(Matrix&m){
            for(int i = 0;i<m.size();i++){
                for(int j =0;j<m[i].size();j++){
                    cout<<m[i][j]<<",";
                }
                cout<<endl;
            }
        }

        Matrix add(Matrix&m){
            vector<<vector<int>>ans(v.size(),vector<int>(v[0].size()));
            for(int i = 0;i<v.size();i++){
                for(int j = 0;j<v[i].size();j++){
                    ans[i][i] = v[i][j] + m.v[i][j];
                }
            }
        }
    }
};