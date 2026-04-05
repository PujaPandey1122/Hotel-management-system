#include<iostream>
#include<exception>
#include "customer.h"

using namespace std;
//MENU DISPLAY
void showMenu()
{
    cout<<"\n========================";
    cout<<"\n  HOTEL MANAGEMENT SYSTEM";
    cout<<"\n========================";
    cout<<"\n1. Register & Book Room";
    cout<<"\n2. Display Customer Record";
    cout<<"\n3. Cancel Room Booking";
    cout<<"\n4. Check Room Availability";
    cout<<"\n5. Exit";
    cout<<"\n========================";
    cout<<"\nEnter choice: ";
}

int main()
{
    Customer c;
    Person* p=&c;    //Polymorphism

    int choice;
     
    do
    {
       showMenu();
       cin>>choice;
       
       switch(choice)
       {

       case 1:
       try
       {
          p->input();   //Booking + Registration
       }
       catch(exception& e)
       {
           cout<<"Error:"<< e.what() <<endl;
       }
       break;

    case 2:
       p->display();
       break;

    case 3:
       c.cancelRoom();     //Cancellation
       break;
       
    case 4:
       if(c.isBooked())
           cout<<"\nRoom is currently occupied.\n";
       else
           cout<<"\nRoom is available.\n";
       break;
       
    case 5:
       cout<<"\nExiting System....\n";
       break;
        
    default:
       cout<<"\nInvalid choice\n";
    }   
       
 } while (choice != 5);
    
    return 0;
}