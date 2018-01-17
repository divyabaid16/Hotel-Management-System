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
        bool checkAvaility();
        int chooseRoom();
        int getRoomRate();
        void displayItems(int type);
        int bookRoom();
        void check_room_no();
        int getRoomNo();
    protected:

    private:
};

#endif // ROOM_H
