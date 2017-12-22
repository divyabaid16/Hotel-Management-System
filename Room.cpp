#include "Room.h"

Room::Room()
{

}
bool Room::checkAvaility(){
    if(4>3){
            cout <<"Available\n";
        return true;
    }
    else{
        cout <<"Not Available\n";
        return false;
    }


}
