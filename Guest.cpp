#include "Guest.h"
#include "Room.h"
#include <bits/stdc++.h>
#include <fstream>
#include "Date.h"
using namespace std;
int Guest::id1=1;
Guest::Guest()
{


}


Guest::Guest(int a,int b,int c){
    room_no=a;
    roomType=b;
    roomRate=c;
}



    void Guest::inputData(){
       fstream file;
       string na;
       char nm[30];
       char ph[14];
        char ct[30];

    file.open("record.txt",ios::out|ios::app);
    if(!file)
    {
      cout<<"Error in creating file.."<<endl;

    }
    cout<<"\nFile created successfully."<<endl;



    while(1){
    cout <<"Enter your Check In date(DD-MM-YYYY):\n";
    Date d1;
    setCheckInDate(d1.d,d1.m,d1.y);

    cout <<"Enter your Check Out date:\n";
    Date d2;
    setCheckOutDate(d2.d,d2.m,d2.y);

    int diff=d1.getDifference(d1,d2);
    difference=diff;

    if(diff>0){
        setPrice(diff);
         break;
    }
    else if(diff==0)
        cout<<"\nCheck In and Check Out Date can't be same\n";
    else cout<<"\nCheck Out can't be before than Check In\n";
    }
    cout <<"Enter Name:\n";
    cin >> nm;
    setName(nm);

    cout <<"Enter your 10 digit mobile no. :\n";
    cin >> ph;
    setPhno(ph);

    cout <<"Enter City:\n";
    cin >>  ct;
    setCity(ct);
    int i;

    //Entering the record in the file
    file<<name<<" "<<ph_no<<" "<<city<<" "<<room_no<<" "; for(i=0;i<3;i++)
             {file<<checkIn[i];
              if(i<2)
                file<<"-";
             }file<<" ";for(i=0;i<3;i++)
             {file<<checkOut[i];
              if(i<2)
                file<<"-";
             }file<<" "<<roomType<<" "<<roomRate<<" "<<price<<endl;

    file.close();
}




   void Guest::setCheckInDate(int d,int m,int y){
    checkIn[0] = d;
    checkIn[1]= m;
    checkIn[2]=y;

    }

    int* Guest::getCheckInDate(){
    return checkIn;
    }

    void Guest::setCheckOutDate(int d,int m,int y){
    checkOut[0] = d;
    checkOut[1]= m;
    checkOut[2]=y;


    }
    int* Guest::getCheckOutDate(){
    return checkOut;
    }

    void Guest::setName(char* nm){
    for(int i=0; i < 10; ++i){
    name[i] = nm[i];
    }
    }
    char* Guest::getName(){
    return name;
    }



    void Guest::setPhno(char* ph){

        for(int i=0; i < 10; ++i){
    ph_no[i] = ph[i];
    }

    }
    char* Guest::getPhno(){
    return ph_no;
    }


     void Guest::setNewPhone(char* ph){
        for(int i=0; i < 10; ++i){
    phhhh[i] = ph[i];
    }

    }

    int Guest::getRoomNo(){
        return room_no;
    }
    void Guest::setCity(char* ct){
    for(int i=0; i < 10; ++i){
    city[i] = ct[i];
    }
    }

    void Guest::setPrice(int pr){
        price=pr*roomRate;
        }

    bool Guest::check(char *a){
        int j=0;
        char k[6]="123";
        for(int i=0;i<3;i++){
            if(k[i]==a[i])
                j++;
        }
        if(j==3)
    return true;
    else
        return false;
    }


    char* Guest::getCity(){
    return city;
    }
    void Guest::orderFood(){
    //displaying the food items available along with their price
    //storing the total sum and adding it to the total bill
    }


    string Guest::submitFeedback(){
   // A form will be provided to be filled
    }



    void Guest::putdata()
              {

                  fstream file;
        file.open("record.txt",ios::in);



    if(!file){
        cout<<"No record is present";

    }
    int q=0;

  //while(file.good()){
   // while (getline(file, line)){
 while(file>>name>>ph_no>>city>>room_no>>checkIn[0]>>checkIn[1]>>checkIn[2]>>checkOut[0]>>checkOut[1]>>checkOut[2]>>roomType>>roomRate>>price){

    file>>name;
    file>>ph_no;
    file>>city;
    file>>room_no;
    for(int i=0;i<3;i++)
             {file>>checkIn[i];
             }for(int i=0;i<3;i++)
             {file>>checkOut[i];
             }
    file>>roomType;
    file>>roomRate;
    file>>price;
            int i;
            int q=roomType;
            string typeOfRoom;
            switch(q){
             case 1:{typeOfRoom="Single room";
            }
            break;
    case 2:{typeOfRoom="Double room";
            }
            break;
    case 3:{typeOfRoom="Family room";
            }
            break;
    case 4:{typeOfRoom="King sized room";
            }
            break;}

            //Printing all the records
            cout<<"\n Cusromer Details";
            cout<<"\n ****************";
            cout<<"\t Name: "<<name;
            cout<<"\t Phone No: "<<ph_no;
            cout<<"\t City: "<<city;
            cout<<"\t Room No: "<<room_no;
            cout<<"\t Check In(DD-MM-YYYY): ";
             for(i=0;i<3;i++)
             {cout<<checkIn[i];
             }

            cout<<"\t Check Out(DD-MM-YYYY): ";
             for(i=0;i<3;i++)
             {cout<<checkOut[i];
             }
            cout<<"\t Room Type: "<<typeOfRoom;
            cout<<"\t Room Rate: "<<roomRate;
            cout<<"\t Total Price: "<<price;
            cout<<"\n\n";


   }
                file.close();

              }

void Guest::searchRecord(){
       fstream file;
        file.open("record.txt",ios::in);
    if(!file){
        cout<<"Error in opening file..";

    }
    char nm[30];
    setName(nm);
    char ph[14];
    char ct[30];
    // while (!file.eof()){
     int i=0,j=0;
    // cout<<ph_no;
        cout<<"Enter the phone no";
        cin>>ph;
        setNewPhone(ph);


        //Searching a record through phone no.
    while(file>>name>>ph_no>>city>>room_no>>checkIn[0]>>checkIn[1]>>checkIn[2]>>checkOut[0]>>checkOut[1]>>checkOut[2]>>roomType>>roomRate>>price){

        int r=0;
        for(int i=0;i<10;i++){

            if(phhhh[i]==ph_no[i])
                r++;
        }


        if(r==10){
                int i;
                j++;
                cout<<"\n Cusromer Details";
            cout<<"\n ****************";
            cout<<"\t Name: "<<name;
            cout<<"\t Phone No: "<<ph_no;
            cout<<"\t City: "<<city;
            cout<<"\t Room No: "<<room_no;
            cout<<"\t Check In(DD-MM-YYYY): ";
             for(i=0;i<3;i++)
             {cout<<checkIn[i];
             }

            cout<<"\t Check Out(DD-MM-YYYY): ";
             for(i=0;i<3;i++)
             {cout<<checkIn[i];
             }
            cout<<"\t Room Type: "<<roomType;
            cout<<"\t Room Rate: "<<roomRate;
            cout<<"\n\n";
            break;
        }
     }
      if(j==0){
            cout<<"\n\nNo matching record found!\n\n";
        }
      file.close();

}

//Deleting the record through room no
void Guest::deleteRecord(){
    int a;
    cout<<"Enter room no.";
    cin>>a;
     string line1;
    ifstream fp1;
fp1.open("record.txt");
ofstream file;
file.open("temp_room.txt");
int flag=0;
while(fp1>>name>>ph_no>>city>>room_no>>checkIn[0]>>checkIn[1]>>checkIn[2]>>checkOut[0]>>checkOut[1]>>checkOut[2]>>roomType>>roomRate>>price){
       if(room_no==a)
            flag=1;

    if(room_no!=a){

            int i;

        file<<name<<" "<<ph_no<<" "<<city<<" "<<room_no<<" "; for(i=0;i<3;i++)
             {file<<checkIn[i];
             }file<<" ";for(i=0;i<3;i++)
             {file<<checkIn[i];
             }file<<" "<<roomType<<" "<<roomRate<<endl;


    }

}
if(flag==0)
    cout<<"\nRecord Not Found\n";
else
    cout<<"\nRecord Deleted\n";
fp1.close();
file.close();
remove("record.txt");
rename("temp_room.txt","record.txt");

}




