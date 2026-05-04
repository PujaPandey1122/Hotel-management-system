#include <iostream>
#include "customer.h"
#include "booking.h"
#include "billing.h"
#include "room.h"
#include "utils.h"

using namespace std;
int main()
{
    Customer customer;
    Booking booking;
    Billing billing;
    Room room;
    person* person= &customer;
    int choice;

    do
    {
        cout<<"\n==== HOTEL MANAGEMENT SYSTEM ====";
        cout<<"\n1. Book Room";
        cout<<"\n2. Display Customer";
        cout<<"\n3. Cancel Booking";
        cout<<"\n4. Add Record";
        cout<<"\n5. Show Records";
        cout<<"\n6. Generate Bill";
        cout<<"\n7. Room Details";
        cout<<"\n8. Exit";
        cout<<"\n\nEnter choice:";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
               try
               {
                 person->input();
                 room.assignRoom(101);
               }
               }
               catch(exception& e)
               {
                 cout<< e.what();
               }
               break;
            
            case 2:
                person->display;
                break;
                
            case 3:
                customer.cancelRoom();
                break;
                
            case 4:
                 booking.addCustomer(customer);
                 break;
                 
            case 5:
                booking.displayAllCustomers();
                break;
                
            case 6:
                showMessage("\nGenerating Bill...");
                cout<<"Total Bill:";
                cout<<billing.calculateBill(3);
                cout<<endl;
                break;
                
            case 7:
                 room.displayRoom();
                 break;
                
            case 8:
                 cout<<"\nThank You!\n";
                 break;
                 
            default:
                 cout<<"\nInvalid Choice!\n";     
        }
            while(choice !=8);
            return 0;
    }