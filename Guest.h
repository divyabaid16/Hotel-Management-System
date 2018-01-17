#include <bits/stdc++.h>
using namespace std;
#ifndef GUEST_H
#define GUEST_H


class Guest
{
    public:
        Guest();

        static int id1;
        char name[30];
        int id;
        long int ph_no;
        char city[30];
        int room_no;
        int checkIn[3];
       // int *checkIn[3];
        int checkOut[3];
        //int roomType;
        int roomType;
        int roomRate;


        void inputData();
        void setCheckInDate(int ,int ,int);
        int* getCheckInDate();

        void setCheckOutDate(int,int,int);
        int* getCheckOutDate();

        void setName(char* nm);
        char* getName();

        void setPhno(long ph);
        long int getPhno();

        void setCity(char* ct);
        char* getCity();


        void orderFood();

        void payBills();

        string printBill();

        string submitFeedback();

        void summary();
        void putdata();

        void writeIntoFile();
        void getCompleteRecord();
        void deleteRecord();
        void setCD(int *);

    protected:

    private:
};//int Guest::id1=1;


#endif // GUEST_H
