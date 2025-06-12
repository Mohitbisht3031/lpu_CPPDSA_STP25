#include<bits/stdc++.h>
using namespace std;

class Animal{
    public :
    int noOfLegs;
    double d;
    char ch;
    Animal(){
    }

    Animal(int noOfLegs,double d,char ch){
        this->noOfLegs = noOfLegs;
        this->d = d;
        this->ch = ch;
        cout<<this<<endl;
    }
    Animal(Animal&a){
        //copy const
    }
    void speak(){
        cout<<"animal speaks"<<endl;
    }
    ~Animal(){
        
    }
};

int main(){
    Animal obj(3,3,'c');
    cout<<&obj<<endl;
    cout<<obj.noOfLegs<<endl;
}