#ifndef BOOKING_H
#define BOOKING_H

#include "customer.h"
#include<vector>

class Booking
{
    private:
      std::vector<Customer> customers;

    public:
      void addCustomer(Customer c);
      void displayAllCustomers() const;
      void clearBookings();  
};
 
#endif