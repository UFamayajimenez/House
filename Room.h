//
// Created by Amaya Jimenez on 2019-03-12.
//


#pragma once

#include <vector>
#include "Furniture.h"



class Room {



    string name;
    int squareSpace;
    int spaceFilled;
    vector<Furniture> theFurniture;


public:
    Room();
    Room(string, int);

    Room(const Room & r);
    Room& operator=(const Room & r);
    ~Room();

    bool addFurniture(Furniture &);
    float calculateCost();
    void whatIsInTheRoom();



};
