#include<bits/stdc++.h>
using namespace std;

// this is how we create a abstract class
class Animal{
    public:
    // this is how we can create a pure virtual function or abstract function
    virtual void speak() = 0;
};

// this class is a concrete class since it is implemeting the pure virtual function
class Dog : public Animal{
    public:
    void speak(){
        cout<<"Dog barks"<<endl;
    }
};

int main(){
    Dog obj;
    obj.speak();
    return 0;
}