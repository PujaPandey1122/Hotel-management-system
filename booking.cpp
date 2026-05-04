#include "booking.h"
#include <iostream>

using namespace std;

// Add customer
void Booking::addCustomer(Customer c)
{
    customers.push_back(c);
    cout<<"\nCustomer addedd successfully!\n"
}

//Display all customers
void Booking::displayAllCustomers() const
{
   if(customers.empty())
   {
     cout<<"\nNo records found!\n";
     return;
   }

}
