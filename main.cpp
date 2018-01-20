#include <bits/stdc++.h>
#include "Room.h"
#include "Room.cpp"
#include "Guest.h"
#include "Date.h"
using namespace std;

int main()
{
    int choice;
    int no,type,rate;
    int c;
    system("cls");
    do{
    cout << "\n\n\tChoose:" << endl;
    cout << "1. Check availability \n2. Book Room\n3. Search a record\n4. Find complete record\n5. Delete a record\n0. Exit"  <<endl;
    cin >>choice;
    switch (choice){
    case 1: {
        int b;
             Room h;
             b=h.chooseRoom();
             c=h.roomNo;
             no=h.getNo();
             type=h.getType();
             rate=h.getRate();
                }
            break;


    case 2: {cout<<"room\n\n";
            int c;
            Room r;
            c=r.chooseRoom();
            }
            break;

    case 3: {
            Guest g;
            g.searchRecord();
            }
            break;
    case 4: {
            Guest g;
            g.putdata();
            }
            break;
    case 5:{
            Guest g;
            g.deleteRecord();
            }
            break;
    case 0: exit(0);
    default: cout<<"Choose a valid option\n\n";
    }
    }while(choice !=0);




    return 0;

}
