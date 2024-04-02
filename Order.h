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

#endif //LABA2_3_ORDER_H

class Order{
private:
    static int orderId;
    vector<FoodItem> items;
    string status;
    double totalAmount;
public:
    Order(int id): totalAmount(0) {
        orderId = id;
    }
    void addItem(FoodItem item);

    void removeItem(int index);

    void calculateTotal();

    void changeStatus (string newStatus);

    // move constructor
    Order(Order &&other);
};