#include <bits/stdc++.h>
using namespace std;
#ifndef GUEST_H
#define GUEST_H


class Guest
{
    public:
        Guest();


        string name;
        int id;
        long ph_no;
        string city;
        int room_no;
        string checkIn;
        string checkOut;
        string roomType;
        int roomRate;


        void inputData();
        void setCheckInDate(string ci);
        string getCheckInDate();

        void setCheckOutDate(string co);
        string getCheckOutDate();

        void setName(string nm);
        string getName();

        void setPhno(long ph);
        long getPhno();

        void setCity(string ct);
        string getCity();


        void orderFood();

        void payBills();

        string printBill();

        string submitFeedback();

        int summary();
        void putdata();

        int writeIntoFile();

    protected:

    private:
};

#endif // GUEST_H
