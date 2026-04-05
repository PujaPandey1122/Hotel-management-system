#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "person.h"

//customer class inherits person

class customer:public person{
    private:
    int roomNumber ;
    int days;
    bool booked;

    public:

    customer(); // constructor 

    void input() override;
    void display() const override ;


    void cancelRoom();
    bool isBooked()const;

};

#endif