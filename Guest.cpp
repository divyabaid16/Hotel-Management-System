#include "Guest.h"
#include "Room.h"
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
Guest::Guest()
{
   /* cout <<"Enter Room type:\n";
    cin >>g.roomType;

    cout <<"Enter your Check In date:\n";
    cin >> g.checkIn;

    cout <<"Enter your Check Out date:\n";
    cin >> g.checkOut;

    cout <<"\nChecking Availabity.......\n";
    Room r;
    bool a=r.checkAvaility();

    if(a==true){
        cout <<"Room is available\n";
    }

    cout <<"Enter Name:\n";
    cin >> g.name;

    cout <<"Enter Phone No.:\n";
    cin >> g.ph_no;

    cout <<"Enter City:\n";
    cin >> g.city;
*/

}



    void Guest::inputData(){

     ofstream fout("record.txt",ios::out|ios::binary);

    cout <<"Enter Room type:\n";
    cin >>roomType;

    cout <<"Enter your Check In date:\n";
    cin >> checkIn;

    cout <<"Enter your Check Out date:\n";
    cin >> checkOut;

    cout <<"\nChecking Availabity.......\n";
    Room r;
    bool a=r.checkAvaility();

    if(a==true){
        cout <<"Room is available\n";
    }

    cout <<"Enter Name:\n";
    cin >> name;

    cout <<"Enter Phone No.:\n";
    cin >> ph_no;

    cout <<"Enter City:\n";
    cin >> city;

    id=0;
    roomRate=0;
    room_no=0;

    fout.write((char*)this,sizeof(Guest));
        cout<<"\n Room is booked!!!";

        fout.close();


}




    void Guest::setCheckInDate(string ci){
    checkIn=ci;
    }
    string Guest::getCheckInDate(){
    return checkIn;
    }
    void Guest::setCheckOutDate(string co){
    checkOut=co;
    }
    string Guest::getCheckOutDate(){
    return checkOut;
    }

    void Guest::setName(string nm){
    name=nm;
    }
    string Guest::getName(){
    return name;
    }

    void Guest::setPhno(long ph){
    ph_no=ph;
    }
    long Guest::getPhno(){
    return ph_no;
    }

    void Guest::setCity(string ct){
    city=ct;
    }
    string Guest::getCity(){
    return city;
    }
    void Guest::orderFood(){
    //displaying the food items available along with their price
    //storing the total sum and adding it to the total bill
    }
    void Guest::payBills(){
    //getting all the payable amounts
    }
    string Guest::printBill(){
    cout<<"Total bill: \n";

    cout<<"Others:";
    }
    string Guest::submitFeedback(){
   // A form will be provided to be filled
    }

    int Guest::summary(){

     ifstream fin("record.txt",ios::in|ios::binary);
     int r,flag;
    cout<<"\n Enter room no: ";
    cin>>r;

    while(!fin.eof())
    {
        fin.read((char*)this,sizeof(Guest));
        if(ph_no==r)
        {

            cout<<"\n Cusromer Details";
            cout<<"\n ****************";
            cout<<"\n\n Name: "<<name;
            cout<<"\n City: "<<city;
            cout<<"\n Phone no: "<<ph_no;
            cout<<"\n\n Room no: "<<room_no;
            cout<<"\n Id "<<id;
            cout<<"\n Rate: "<<roomRate;
            cout<<"\n Type: "<<roomType;
            cout<<"\n CI: "<<checkIn;
            cout<<"\n CO: "<<checkOut;
            flag=1;
            break;
        }
    }

    if(flag==0)
        cout<<"\n Sorry Room no. not found or vacant!!";

    cout<<"\n\n Press any key to continue!!";


    fin.close();
    }

    void Guest::putdata()
              {

                  cout<<"\n\t"<<name<<"\t"<<ph_no<<"\t"<<city;

              }
    int Guest::writeIntoFile(){
        Guest gst;
        fstream file;


    //open file in write mode
    file.open("record.txt",ios::app);
    if(!file)
    {
      cout<<"Error in creating file.."<<endl;
      return 0;
    }
    cout<<"\nFile created successfully."<<endl;
    gst.inputData();
    file.write((char*)&gst,sizeof(gst));
    file.close();   //close the file
    cout<<"\nFile saved and closed succesfully."<<endl;

    }


