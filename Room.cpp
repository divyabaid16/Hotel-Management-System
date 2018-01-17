#include "Room.h"
#include "Guest.h"
#include <bits/stdc++.h>
# include <stdio.h>
using namespace std;

Room::Room()
{

}
bool Room::checkAvaility(){
   int room_no;
   int type;

   switch(roomType){
   case 1:displayItems(1);
            break;
    case 2:displayItems(2);
            break;
    case 3:displayItems(3);
            break;
    case 4:displayItems(4);
            break;
    }
  // bookRoom();
/*ofstream single;
single.open("single.txt");
single <<"101\n102\n103\n104\n201\n202\n203\n301\n302\n303\n";
single.close();
*/


    int i=1;
    string line1;






return true;


}

void Room::displayItems(int ty){
    int room_no;
   int type;
   int single_room=0;
   int double_room=0;
   int family_room=0;
   int king_size_room=0;
   int a=0;

    cout<<"\nThe available rooms are:\n";
   ifstream single1("total_room.txt");
string line;
while(single1 >> room_no >> type){
       // if(ty==type){

       // }
   // cout <<room_no<<"\n";
   if(ty==1){
    if(ty==type){
        cout <<room_no<<"\n";
        single_room++;
        a++;
    }
    }

    if(ty==2){
    if(ty==type){
        double_room++;
        a++;
        cout <<room_no<<"\n";
    }
    }

    if(ty==3){
    if(ty==type){
        family_room++;
        cout <<room_no<<"\n";
        a++;
    }
    }

    if(ty==4){
    if(ty==type){
        king_size_room++;
        cout <<room_no<<"\n";
        a++;
    }
    }

}

single1.close();

char q;
if(a!=0){
        cout<<"Would you like to book the room (y/n)";
        cin >> q;
        if(q=='y'||q=='Y')
    roomNo=bookRoom();
}
if(ty==1){
    if(single_room==0)
        cout<<"\nNo Single occupancy roooms are available\n";



}

if(ty==2){
    if(double_room==0)
        cout<<"\nNo Double occupancy roooms are available\n";
}

if(ty==3){
    if(family_room==0)
        cout<<"\nNo Family roooms are available\n";
}

if(ty==4){
    if(king_size_room==0)
        cout<<"\nNo King size roooms are available\n";
        char x='x';

            cout<<"Would you like to choose any other room(y/n)";
            cin >> x;
            if(x=='y')
                chooseRoom();


single1.close();

}
}

int Room::bookRoom(){
    int no[30]={101,102,103,104,105,106,107,108,109,110,
                201,202,203,204,205,206,207,208,209,210,
                301,302,303,304,305,306,307,308,309,310,
                };
    int single_room[7]={101,102,103,201,202,301,302};
    int double_room[13]={104,105,106,107,108,203,204,205,206,303,304,305,306};
    int family_room[5]={109,110,207,307,308};
    int king_size_room[5]={208,209,210,309,310};

    int a;
    cout<<"\nChoose any of the Room No:\n";
    cin >>a;
    roomNo=a;

    if(roomType==1){
        int j=0;
    for(int i=0;i<7;i++){
            if(a==single_room[i])
        j++;
    }
    if(j==0){
        cout<<"Enter valid Room No.";
        roomNo=bookRoom();
    }
    }


    if(roomType==2){
        int j=0;
    for(int i=0;i<13;i++){
            if(a==double_room[i])
        j++;
    }
    if(j==0){
        cout<<"Enter valid Room No.";
        roomNo=bookRoom();
    }
    }

    if(roomType==3){
        int j=0;
    for(int i=0;i<5;i++){
            if(a==family_room[i])
        j++;
    }
    if(j==0){
        cout<<"Enter valid Room No.";
        roomNo=bookRoom();
    }
    }

    if(roomType==4){
        int j=0;
    for(int i=0;i<5;i++){
            if(a==king_size_room[i])
        j++;
    }
    if(j==0){
        cout<<"Enter valid Room No.";
        roomNo=bookRoom();
    }
    }

    int room_no;
   int type;
    string line1;
    ifstream fp1;
fp1.open("total_room.txt");
ofstream fp2;
fp2.open("temp.txt");
int r=1;
while(fp1 >> room_no >> type){
        r++;
    if(room_no!=a){
            cout<<"d"<<"\n";
        fp2 <<room_no<<" "<<type<<"\n";

    }

}
fp1.close();
fp2.close();
remove("total_room.txt");
rename("temp.txt","total_room.txt");

Guest g;
//g.inputData();
g.writeIntoFile();

return roomNo;
}

int Room::getRoomNo(){
    return roomNo;
}

int Room::chooseRoom(){
    int choice;
    char *type;
    cout<<"\nSelect the room you would like to stay in: ";
    cout<<"\n\t(The price are per night)";
    cout<<"\n1. Single room (Fits 1) -\tRs.3000";
    cout<<"\n2. Double room (Fits 2) -\tRs.4000";
    cout<<"\n3. Family room (Fits 4) -\tRs.5000";
    cout<<"\n4. King sized room (Fits 2) -\tRs.4500";
    cin >> choice;
    roomType=choice;
    checkAvaility();
    switch(choice){
    case 1:type="Single room";
            break;
    case 2:type="Double room";
            break;
    case 3:type="Family room";
            break;
    case 4:type="King sized room";
            break;

            }
    return choice;
}

int Room::getRoomRate(){
    int price;
    switch(roomType){
    case 1:price=3000;
            break;
    case 2:price=4000;
            break;
    case 3:price=5000;
            break;
    case 4:price=4500;
            break;
        }
        return price;
}
