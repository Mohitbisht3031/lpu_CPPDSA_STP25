#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void speak(){
        cout<<"Animal speaks"<<endl;
    }
};

class Dog : public Animal
{
    public:
    void speak(){
        cout<<"dog barks"<<endl;
    }
};

int main(){
    Dog *obj = new Dog();
    Animal *a = new Dog(); // Runtime poly

    obj->speak();
    a->speak();

}