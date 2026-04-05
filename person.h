#ifndef PERSON_H   
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

//abstract base class

class person {   // class created person 
    protected :
    string name ;
    string phone;
    
    public:
    virtual void input()=0;
    virtual void display() const=0;


    virtual ~ person();
};
#endif
