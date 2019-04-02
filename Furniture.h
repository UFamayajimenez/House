//
// Created by Amaya Jimenez on 2019-03-12.
//

#pragma once

#include <string>

using namespace std;

class Furniture {

    string name;
    string quality;
    float price;
    int amountOfSpace;
public:
    const string &getName() const;

    const string &getQuality() const;

    float getPrice() const;

    int getAmountOfSpace() const;


public:

    Furniture(); //Constructors
    Furniture(string, string, float, int);


    Furniture(const Furniture &f); //The Big 3
    Furniture& operator=(const Furniture &f);
    ~Furniture();







};


