//
// Created by Amaya Jimenez on 2019-03-12.
//

#include <iostream>
#include "Room.h"



Room::Room(){

    name = "";
    squareSpace = 0;
    spaceFilled = 0;
    theFurniture.clear();


}

Room::Room(string _name, int _squareSpace){
    theFurniture.clear();

    name = _name;
    squareSpace = _squareSpace;
    spaceFilled = 0;

    theFurniture.clear();



}

Room::Room(const Room & r){ // Room::Room(const Room &r){}, Room::Romm(const Room &r){}
    this->name = r.name;
    this->squareSpace = r.squareSpace;
    this->spaceFilled = r.spaceFilled;

    for(int i = 0; i < r.theFurniture.size(); i++){
        this->theFurniture.push_back(r.theFurniture.at(i));
    }


}
Room& Room::operator=(const Room & r){ // Rooom& Room::operator=(Room &r){}, Room& Room::operator=(const Room &r){}
    this->theFurniture.clear();

    this->name = r.name;
    this->squareSpace = r.squareSpace;
    this->spaceFilled = r.spaceFilled;

    for(int i = 0; i < r.theFurniture.size(); i++){
        this->theFurniture.push_back(r.theFurniture.at(i));
    }

    return *this;

}
Room::~Room(){

}

bool Room::addFurniture(Furniture &f){
    if(f.getAmountOfSpace() + spaceFilled > squareSpace){
        cout << "You don't have enough space for the " << f.getName() << " in this room!" << endl;
        return false;
    }
    else{
        spaceFilled += f.getAmountOfSpace();
        theFurniture.push_back(f);
        return true;
    }

}
float Room::calculateCost(){
    float sum = 0;
    for(int i = 0; i < theFurniture.size(); i++){
        sum += theFurniture.at(i).getPrice();
    }
    cout<< "the cost of all of the furniture in this room is: $" << sum << endl;

}
void Room::whatIsInTheRoom(){
    for(int i = 0; i < theFurniture.size(); i++){
        cout << "Name: " << theFurniture.at(i).getName() << endl;
        cout << "Price: " << theFurniture.at(i).getPrice() << endl;
        cout << "Amount of space it takes up: " << theFurniture.at(i).getAmountOfSpace() << "sqft" << endl;
        cout << endl;
    }

}
