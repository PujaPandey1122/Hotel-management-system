#include "room.h"

//Constructor
Room::Room()
{
    roomNumber=0;
}

//Assign room
void Room::assignRoom(int number)
{
    roomNumber=number;
    cout<<"\nRoom assigned successfully!\n";
}

//Dispaly room
void Room::dispalyRoom() const
{
    cout<<"\nRoom Number :"<< roomNumber<<endl;
}
