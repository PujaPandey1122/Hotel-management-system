#ifndef ROOM_H
#define ROOM_H

#include<iostream>
using namespace std;

class Room
{
   private:
     int roomNumber;

   public:
     Room();
     void assignRoom(int number);
     void displayRoom() const;

};

#endif