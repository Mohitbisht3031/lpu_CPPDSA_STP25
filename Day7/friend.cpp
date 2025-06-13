#include<bits/stdc++.h>
using namespace std;

class Person{
    private:
    string pin;
    protected:
    string ATMCard;
    public:
    string name;
    Person(string name,string p,string atm){
        this->name = name;
        this->pin = p;
        this->ATMCard = atm;
    }
    void intro(){
        cout<<"Hey my name is "<<name<<endl;
    }

    friend class CID;
    friend void bestfriend(Person&p);
};

void bestfriend(Person&p){
    cout<<"person name is "<<p.name<<" ,his atm no. is "<<p.ATMCard<<", this pin is "<<p.pin<<endl;
}

class CID{
    public:
    void tellUsAboutPerson(Person p){
        cout<<"person name is "<<p.name<<"his atm no. is "<<p.ATMCard<<", this pin is "<<p.pin<<endl;
    }
};

int main(){
    Person p("Mohit","1234","123456789");
    CID bf;
    bf.tellUsAboutPerson(p);
    bestfriend(p);
}