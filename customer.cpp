#include"customer.h"
#include <stdexcept>
using namespace std;

//construtor 
customer::customer ()
{
    roomNumber =0;
    days=0;
    booked=false;
}


//input  function booking (booking)
 void customer ::input()
{
    cout<<"\n Enter  Name :";
    cin>>name;


    cout <<"ENTER phone number :";
    cin >>phone;


    cout <<"Enter room number ";
    cin >>roomNumber;


    cout<<"Enter days to stay";

    cin >> days;


    if(days<=0)
    {
        throw invalid_argument ("Days must be positive !");
    }
    booked =true;
    cout<<"\n  Room booked successfully !";


 }
 //display function 
 void customer :: display () const
{
    if(!booked )
    {
        cout<<"\n No booking found !\n";
        return ;
    }
  cout<<"\n -------CUSTOMER DETAILS ---------------";

  cout <<"\nName    :"<<name ;
  cout <<"\n Phone number   :"<<phone;
  cout<<"\n Room number    :"<< roomNumber;
  cout <<"\n Days to stay     :"<< days;




  cout <<"\n-------------------------------------------\n";

}
void customer::cancelRoom()
{
    if(!booked )
    {
        cout<<"\n NO booking to cancel !\n";
        return ;

    }
    booked =false ;
    cout<<"\n Room booking cancelled successfully!\n";

}
// check booking 

bool customer ::isBooked()const{
    return booked ;
}
