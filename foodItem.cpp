// Created by user on 01.03.2024.
//


#include "foodItem.h"
#include <iostream>
#include <string>

using namespace std;

FoodItem::FoodItem() : name{"none"}, description{"none"}, price{0} {}

FoodItem::FoodItem(string n) : name{n}, description{"none"}, price{0} {}

FoodItem::FoodItem(string n, string desc) : name{n}, description{desc}, price{0} {}

FoodItem::FoodItem(string n, string desc, double p) : name{n}, description{desc}, price{p} {}


string FoodItem:: getdescription() {return description;}

double  FoodItem:: getPrice() {return price;}

FoodItem:: ~FoodItem(){}

string FoodItem::getName() const{
    return name;
}
void FoodItem::setName(string &newName) {

}

// unary operator overload

//FoodItem::FoodItem operator-() {return FoodItem(-price);}

//  binary operator overload

FoodItem operator+(const FoodItem& other){ return FoodItem(); }