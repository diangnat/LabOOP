//
// Created by user on 12.04.2024.
//
#include "ItalianFood.h"
#include <iostream>

ItalianFood::ItalianFood(): Order(), nameDish(""),ingredient(0) {}
ItalianFood::ItalianFood(std::string nameDish):Order(0),nameDish(nameDish),ingredient(0) {}
ItalianFood::ItalianFood(std::string nameDish, int ingredient): Order(0,"Unknown"),nameDish(nameDish),
ingredient(ingredient){}

ItalianFood::~ItalianFood(){}

void ItalianFood::setNameDish(std::string newName) {nameDish = newName;}
void ItalianFood::setIngredient(int newIngredient) {ingredient = newIngredient;}

//void ItalianFood::display() {
//    Order::display();
//    cout<<"Name dishes: "<<nameDish<<endl;
//    cout<<"Count ingredient: "<<ingredient<<endl;
//}

//copy constructor
//ItalianFood::ItalianFood(const ItalianFood &other): Order(other) {
//    nameDish = other.nameDish;
//    ingredient = other.ingredient;
//}
//
////move constructor
//
//ItalianFood::ItalianFood(ItalianFood &&other) noexcept : Order(other),nameDish(other.nameDish),ingredient(other.ingredient) {
//    nameDish = nullptr;
//    ingredient = NULL;
//}
//
////operator =
//
//ItalianFood &ItalianFood::operator=(const ItalianFood& other) {
//    if (this != &other){
//        Order::operator=(other);
//        nameDish = other.nameDish;
//        ingredient = other.ingredient;
//    }
//    return *this;
//}
