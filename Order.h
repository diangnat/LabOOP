//
// Created by user on 01.03.2024.
//

#ifndef LABA2_3_ORDER_H
#define LABA2_3_ORDER_H
#include <iostream>
#include <string>
#include "foodItem.h"
#include <vector>
using namespace std;


class Order{
private:
    int orderId;
    vector<FoodItem> items;
    string status;
    double totalAmount;
public:
    Order():orderId(0),totalAmount(0),status(""){}
    Order(int id):orderId(id), totalAmount(0),status("") {}
    Order(int id,string status):orderId(id),status(status),totalAmount(0){}
    Order(int id,string status,double totalAmount):orderId(id),status(status),totalAmount(totalAmount){}

    void addItem(FoodItem item);

    void removeItem(int index);

    void calculateTotal();

//    void display();

    void changeStatus (string newStatus);

    // move constructor
    Order(Order &&other);
//
//    //copy constructor
    Order(const Order& other);
//
//    //operator =
    Order& operator=(const Order& other);
};


#endif //LABA2_3_ORDER_H
