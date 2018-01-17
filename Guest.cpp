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



    void Guest::inputData(){
        char nm[30];
        //int id=0;
        id=id1;
        id1++;
        long int ph;
        char ct[30];
        //int room_no;
        int ci[3];
        int co[3];
        //char roomType[30];
        //int roomRate;
        int f;



        Room r;
   // id=0;
     room_no=r.getRoomNo();
     //roomRate=0;

   /*     Room r;
        f=r.chooseRoom();
        roomType=f;


        roomRate=r.getRoomRate();*/
       //cout <<"Enter Room type:\n";
       //cin >>roomType;
    cout <<"\nChecking Availabity.......\n";

    cout <<"Enter your Check In date(DD-MM-YYYY):\n";


    Date d1;
    cout <<"Enter Day:";
    cin >>ci[0];
    d1.d=ci[0];
    cout <<"Enter Month:";
    cin >>ci[1];
    d1.m=ci[1];
    cout <<"Enter Year:";
    cin >>ci[2];
    d1.y=ci[2];


   // Date d1;
    //int* in=d1.getDate();
    //setCD(in);

    //cin >> ci;
    setCheckInDate(d1.d,d1.m,d1.y);

    //Date d1;
//    for(int j=0;j<3;j++)ci[j]=d1.getDate();
    //cout <<roomType;
    cout <<"Enter your Check Out date:\n";
    Date d2;
     cout <<"Enter Day:";
    cin >>co[0];
    d1.d=co[0];
    cout <<"Enter Month:";
    cin >>co[1];
    d1.m=co[1];
    cout <<"Enter Year:";
    cin >>co[2];
    d1.y=co[2];
    setCheckOutDate(d2.d,d2.m,d2.y);


/*    bool a=r.checkAvaility();

    if(a==true){
        cout <<"Room is available\n";
    }
    */

     cout <<"Enter Name:\n";
    cin >> nm;
    setName(nm);

    cout <<"Enter Phone No.:\n";
    cin >> ph;
    setPhno(ph);

    cout <<"Enter City:\n";
    cin >>  ct;
    setCity(ct);
}




   void Guest::setCheckInDate(int d,int m,int y){
    checkIn[0] = d;
//    checkIn[1]="-";
    checkIn[1]= m;
  //  checkIn[3]="-";
    checkIn[2]=y;

    }

    int* Guest::getCheckInDate(){
    return checkIn;
    }

    void Guest::setCheckOutDate(int d,int m,int y){
    checkOut[0] = d;
//    checkIn[1]="-";
    checkOut[1]= m;
  //  checkIn[3]="-";
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

    void Guest::setPhno(long int ph){
    ph_no=ph;
    }
    long int Guest::getPhno(){
    return ph_no;
    }

    void Guest::setCity(char* ct){
    for(int i=0; i < 10; ++i){
    city[i] = ct[i];
    }
    }
    char* Guest::getCity(){
    return city;
    }
    void Guest::orderFood(){
    //displaying the food items available along with their price
    //storing the total sum and adding it to the total bill
    }
    void Guest::payBills(){
    //getting all the payable amounts
    cout << "Summary:";
    cout<<"\n Cusromer Details";
            cout<<"\n ****************";
            cout<<"\n\n Name: "<<name;
            cout<<"\n\n ID: "<<id;
            cout<<"\n\n Phone No: "<<ph_no;
            cout<<"\n\n City: "<<city;
            cout<<"\n\n Room No: "<<room_no;

            cout<<"\n\n Check In: "<< checkIn;
            cout<<"\n\n Check Out: "<<checkOut;
            cout<<"\n\n Room Type: "<<roomType;
            cout<<"\n\n Room Rate: "<<roomRate;

    }
    string Guest::printBill(){
    cout<<"Total bill: \n";

    cout<<"Others:";
    }
    string Guest::submitFeedback(){
   // A form will be provided to be filled
    }

    void Guest::summary(){
       Guest obj1;
    int eno;
    char ch = 'n';

    ifstream file1("record.dat", ios::binary); // this file should already exist

    cout << "Enter the phone no : " <<endl;
    cin >> eno;

    while(file1.read((char *)&obj1, sizeof(obj1)))
    {
        //!file1.eof()
        //;

        if(obj1.getPhno()==eno)
        {
            obj1.putdata();
            ch = 'y';
            //break;
        }
    }

    if(ch =='n')
        cout << "Record Not Found !!" << endl;
    file1.close();
    }

    void Guest::putdata()
              {
         /*         cout<<"\n Cusromer Details";
            cout<<"\n ****************";
            cout<<"\t\t"<<name;
            cout<<"\t\t"<<id;
            cout<<"\t\t"<<ph_no;
            cout<<"\t\t"<<city;
            cout<<"\t\t"<<room_no;
            cout<<"\t\t"<< checkIn;
            cout<<"\t\t"<<checkOut;
            cout<<"\t\t"<<roomType;
            cout<<"\t\t"<<roomRate;
            */
            int i;
            cout<<"\n Cusromer Details";
            cout<<"\n ****************";
            cout<<"\t Name: "<<name;
            cout<<"\t ID: "<<id;
            cout<<"\t Phone No: "<<ph_no;
            cout<<"\t City: "<<city;
            cout<<"\t Room No: "<<room_no;
            cout<<"\t Check In(DD-MM-YYYY): ";
             for(i=0;i<3;i++)
             {cout<<checkIn[i];
              if(i<2)
                cout<<"-";
             }

            cout<<"\t Check Out(DD-MM-YYYY): ";
             for(i=0;i<3;i++)
             {cout<<checkIn[i];
              if(i<2)
                cout<<"-";
             }
            cout<<"\t Room Type: "<<roomType;
            cout<<"\t Room Rate: "<<roomRate;
            cout<<"\n\n";
}
    void Guest::writeIntoFile(){
        Guest gst;
        ofstream file;
        file.open("record.dat",ios::binary|ios::app);


    //open file in write mode

    if(!file)
    {
      cout<<"Error in creating file.."<<endl;
      //return 0;
    }
    cout<<"\nFile created successfully."<<endl;
    gst.inputData();
    file.write((char*)&gst,sizeof(gst));
    file.close();   //close the file
    cout<<"\nFile saved and closed succesfully."<<endl;

    }

    void Guest::getCompleteRecord(){
        Guest gst;

     ifstream fin;
     fin.open("record.dat",ios::binary);

    while(fin.read((char*)&gst,sizeof(Guest)))
    {
        gst.putdata();
    }
    fin.close();

    }

    void Guest::deleteRecord(){
        ifstream fd;
        ofstream ft;
        fd.open("record.dat",ios::binary);
        ft.open("temp.dat",ios::binary|ios::app);
        int flagd=0;
        char conf='y';
        Guest ed;
        cout<<"Enter the phone no.:";
        int enodel; cin>>enodel;
        while(fd.read((char*)&ed,sizeof(ed)))//!fd.eof())
        {
            //fd.read((char*)&ed,sizeof(ed));
            if(ed.getPhno()==enodel)
            {
                flagd=1;
                cout<<"record preparing for delete";
                ed.putdata();
                cout<<"do you want do delete this record(y/n):";
                cin>>conf;
                if(conf=='n')
                ft.write((char*)&ed,sizeof(ed));
            }
             ft.write((char*)&ed,sizeof(ed));
        }
        if(flagd==0)
        cout<<"Record not found ";
        remove("record.dat");
        rename("temp.dat","record.dat");
        cout<<"process complete";
        fd.close(); ft.close();
        }



   /*     void Guest::setCD(int *in){
            checkIn[0] = &in[0];
//    checkIn[1]="-";
    checkIn[1]= &in[1];
  //  checkIn[3]="-";
    checkIn[2]=&in[2];
        }
*/
