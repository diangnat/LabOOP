//
// Created by user on 12.04.2024.
//

#ifndef LABA2_3_ITALIANFOOD_H
#define LABA2_3_ITALIANFOOD_H
#include "Order.h"
#include <iostream>

using namespace std;

class ItalianFood: public Order{
private:
    string nameDish;
    int ingredient;
public:
    ItalianFood();
    ItalianFood(string nameDish);
    ItalianFood(string nameDish,int ingredient);
    ItalianFood(ItalianFood&& other)noexcept;
    ItalianFood(const ItalianFood& other);
    ItalianFood& operator=(const ItalianFood& other);
    ~ItalianFood();

    void setNameDish(string newName);
    void setIngredient(int newIngredient);
//    void display();

};
#endif //LABA2_3_ITALIANFOOD_H
