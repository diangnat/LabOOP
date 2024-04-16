//
// Created by user on 01.03.2024.
//
#include <iostream>
#include <string>
#include "Order.h"

using namespace std;

//int Order::orderId = 0;

void Order::addItem(FoodItem item){
    items.push_back(item);
//    totalAmount += item.getPrice();
}

void Order:: removeItem(int index) {
    totalAmount -= items[index].getPrice();
    items.erase(items.begin() + index);
}

void Order:: calculateTotal(){
    this->totalAmount = 0;
    for (FoodItem item: items) {
        totalAmount += item.getPrice();
    }
}

void Order:: changeStatus (string newStatus){
    this->status = newStatus;
}

//void Order::display() {
//    cout<<"Total amount: "<<totalAmount<<endl;
//    cout<<"Status: "<<status<<endl;
//}

// move constructor
Order::Order(Order &&other): totalAmount(other.totalAmount), status(other.status) {
    other.totalAmount = NULL;
    other.status = nullptr;
}

// copy constructor
Order::Order(const Order &other):totalAmount(other.totalAmount),orderId(other.orderId),status(other.status) {}

//operator =

Order &Order::operator=(const Order &other) {
    if(this != &other){
        totalAmount = other.totalAmount;
        orderId = other.orderId;
        status = other.status;
    }
    return *this;
}