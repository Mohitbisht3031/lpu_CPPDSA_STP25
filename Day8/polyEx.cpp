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
    }

    Matrix(vector<vector<int>>&v){
        this->v = v;
    }

        void display(Matrix&m){
            for(int i = 0;i<m.v.size();i++){
                for(int j =0;j<m.v[i].size();j++){
                    cout<<m.v[i][j]<<",";
                }
                cout<<endl;
            }
        }

        Matrix add(Matrix&m){
            vector<vector<int>>ans(v.size(),vector<int>(v[0].size()));
            for(int i = 0;i<v.size();i++){
                for(int j = 0;j<v[i].size();j++){
                    ans[i][j] = v[i][j] + m.v[i][j];
                }
            }
            return Matrix(ans);
        }

        Matrix multilpy(Matrix&m){
            vector<vector<int>>ans(v.size(),vector<int>(v[0].size()));
            for(int i = 0;i<v.size();i++){
                for(int j = 0;j<m.v[0].size();i++){
                    for(int k = 0;k<v[0].size();j++){
                        ans[i][j]+=(v[i][j]*m.v[i][j]);
                    }
                }
            }
            return Matrix(ans);
        }

        Matrix  operator +(Matrix&m){
            vector<vector<int>>ans(v.size(),vector<int>(v[0].size()));
            for(int i = 0;i<v.size();i++){
                for(int j = 0;j<v[i].size();j++){
                    ans[i][j] = v[i][j] + m.v[i][j];
                }
            }
            return Matrix(ans);
        }

    };

int max(int a,int b){
    return max(a,b);
}

int max(int a,int b,int c){
    return max(a,max(b,c));
}


int main(){
    Matrix m1(4,4);
    Matrix m2(4,4);
    
    Matrix m3 = m1+m2; // m1.+(m2)
}