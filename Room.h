#include <bits/stdc++.h>
using namespace std;
#ifndef ROOM_H
#define ROOM_H


class Room
{
    public:
        Room();
        int roomNo;
        int roomType;
        int rate;
        int no;
        bool checkAvaility();
        int chooseRoom();
        int getRoomRate();
        void displayItems(int type);
        void bookRoom();
        void check_room_no();
        int getRoomNo();
        void setRoomNo(int a);
        int getNo();
        int getType();
        int getRate();
    protected:

    private:
};

#endif // ROOM_H
