//
// Created by user on 01.03.2024.
//

#ifndef LABA2_3_FOODITEM_H
#define LABA2_3_FOODITEM_H
#include <iostream>
#include <string.h>

using namespace std;

#endif //LABA2_3_FOODITEM_H

class FoodItem{
private:
    string name;
    string description;
    double price;
public:
    FoodItem();

    FoodItem(string n);

    FoodItem(string n, string desc);

    FoodItem (string n, string desc, double p);

    string getdescription();

    double  getPrice();
    ~FoodItem();
    // const
    string getName() const;

    void setName(string &newName);

    // unary operator overload
//    FoodItem& FoodItem operator -()

    //  binary operator overload

    FoodItem operator+(const FoodItem& other);

};
