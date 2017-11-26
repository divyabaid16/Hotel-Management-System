#ifndef GUEST_H_INCLUDED
#define GUEST_H_INCLUDED

class Guest{
public:
    string name;
    int id;
    long ph_no;
    string address;
    int room_no;
    string checkIn;
    string checkOut;
    string roomType;
    int roomRate;

    void getCheckInDate(string checkIn){
    this.checkIn=checkIn;
    }
    string setCheckInDate(){
    return checkIn;
    }
    void getCheckOutDate(string checkOut){
    this.checkOut=checkOut;
    }
    string setCheckOutDate(){
    return checkOut;
    }
    void orderFood(){
    //displaying the food items available along with their price
    //storing the total sum and adding it to the total bill
    }
    void payBills(){
    //getting all the payable amounts
    }
    string printBill(){
    cout<<"Total bill: \n";
    cout<<"Room price: "+roomType+" "+roomRate+"\n";
    cout<<"Others:";
    }
    string submitFeedback(){
   // A form will be provided to be filled
    }

};

#endif // GUEST_H_INCLUDED
