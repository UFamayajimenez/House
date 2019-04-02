//
// Created by Amaya Jimenez on 2019-03-12.
//

#include "Furniture.h"


//Constructors

Furniture::Furniture(){

    name = "";
    quality = "";
    price = 0;
    amountOfSpace = 0;

}


Furniture::Furniture(string _name, string _quality, float _price, int _amountOfSpace){
    name = _name;
    quality = _quality;
    price = _price;
    amountOfSpace = _amountOfSpace;
}

//The Big 3

Furniture::Furniture(const Furniture &f){
    this->name = f.name;
    this->quality = f.quality;
    this->price = f.price;
    this->amountOfSpace = f.amountOfSpace;

}
Furniture& Furniture::operator=(const Furniture &f){

    this->name = f.name;
    this->quality = f.quality;
    this->price = f.price;
    this->amountOfSpace = f.amountOfSpace;

    return  *this;


}

Furniture:: ~Furniture(){

}

const string &Furniture::getName() const {
    return name;
}

const string &Furniture::getQuality() const {
    return quality;
}

float Furniture::getPrice() const {
    return price;
}

int Furniture::getAmountOfSpace() const {
    return amountOfSpace;
}
