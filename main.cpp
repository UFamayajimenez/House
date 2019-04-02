#include <iostream>

#include "Furniture.h"
#include "Room.h"

int main() {

    Furniture Chair = Furniture("Rolly Chair", "Good", 23.45, 2);
    Furniture Bed = Furniture("Queen Bed", "Okay", 50.43, 20);
    Furniture Desk = Furniture("Wooden Desk", "Good", 40.23, 10);

    Furniture BadDesk = Furniture("Bad Desk", "Poor", 5.25, 8);

    Furniture hugeBeanBagChair = Furniture("Bean Bag Chair", "Good", 200, 100);

    //Test Copy and Assignment

    Furniture SisterBed = Bed; //Calls Copy Constructor
    BadDesk = Desk; //Calls Assignment Operator

    Room Bedroom = Room("Amaya's Room", 100);
    Room NataliaRoom = Room("Natalia's Room" , 200);

    NataliaRoom.addFurniture(hugeBeanBagChair);
    NataliaRoom.addFurniture(Bed);

    Bedroom.addFurniture(Bed);
    Bedroom.addFurniture(Desk);

    NataliaRoom = Bedroom; //Assignment Operator
    Room copyRoom = Bedroom; //Copy Constructor


    Bedroom.addFurniture(Chair);
    Bedroom.addFurniture(hugeBeanBagChair);

    Bedroom.whatIsInTheRoom();
    Bedroom.calculateCost();




    return 0;
}