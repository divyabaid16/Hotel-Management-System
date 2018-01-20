#include <bits/stdc++.h>
using namespace std;
#ifndef GUEST_H
#define GUEST_H


class Guest
{
    public:
        Guest();
        Guest(int a,int b,int c);
        int no;
        static int id1;
        char name[30];
        int id;
        int difference;

        //string naaaa;
        char ph_no[10];
        char phhhh[10];
        char city[30];
        int room_no;
        int checkIn[3];
       // int *checkIn[3];
        int checkOut[3];
        //int roomType;
        int roomType;
        int roomRate;
        int price;

        char type1[25];
        void inputData();
        bool check(char *);

        void setCheckInDate(int ,int ,int);
        int* getCheckInDate();

        void setCheckOutDate(int,int,int);
        int* getCheckOutDate();

        void setName(char* nm);
        char* getName();

       // void setN(string a);
        //string getN();

        void setPhno(char* ph);
        char* getPhno();

        void setNewPhone(char *ph);

        void setCity(char* ct);
        char* getCity();

        void setPrice(int pr);

        void setRoomNo(int a);
        int getRoomNo();

        void getType(int n);


        void orderFood();

        void payBills();

        string printBill();

        string submitFeedback();

        void summary();
        void putdata();

        //void writeIntoFile(int a);
        void writeIntoFile();
        void searchRecord();
        void getCompleteRecord();
        void deleteRecord();
        void setCD(int *);

    protected:

    private:
};//int Guest::id1=1;


#endif // GUEST_H
