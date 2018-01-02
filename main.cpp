#include <bits/stdc++.h>
#include "Room.h"
#include "Room.cpp"
#include "Guest.h"
using namespace std;

int main()
{
    int choice;
    system("cls");
    do{
    cout << "\tChoose:" << endl;
    cout << "1. Check availability \n2. Order food\n3. Book Room\n4. Call housekeeping\n5. Search a record\n6. Find complete record\n7. Delete a record\n0. Exit"  <<endl;
    cin >>choice;
    switch (choice){
    case 1: {cout<<"ava\n\n";
             Room h;
             h.checkAvaility();
                }
            break;
    case 2: cout<<"food\n\n";
            break;
    case 3: {cout<<"room\n\n";
           Guest g;
           g.writeIntoFile();}
            break;
    case 4: {cout<<"house\n\n";
            Guest g;
            g.inputData();
            g.payBills();}
            break;
    case 5: {cout<<"bills\n\n";
            Guest g;
            g.summary();
            }
            break;
    case 6: {cout<<"hall\n\n";
            Guest g;
            g.getCompleteRecord();
            }
            break;
    case 7:{cout<<"Delete";
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
