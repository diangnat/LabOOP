//
// Created by user on 01.03.2024.
//

#ifndef LABA2_3_CUSTOMER_H
#define LABA2_3_CUSTOMER_H
#include <iostream>
#include <string.h>
#include "Person.h"
#include <fstream>
using namespace std;

#endif //LABA2_3_CUSTOMER_H


class Customer: public Person{
private:
    string phoneNumber;
    string address;

public:
    Customer();

    Customer(string phone);

//    Customer(string n, string phone);

    Customer(string phone, string addr);

//    void setName(string n);

    void setPhoneNumber(string phone);

    void setAddress(string addr);

    void displayInfo();

    // copy constructor
//    Customer(const Customer &other);

//stream insertion
friend ostream& operator<<(ostream& os, const Customer& customer);

//stream  extraction
friend istream& operator>>(istream& is, Customer& customer);

    //this
    Customer(string &name, string &phoneNumber, string &address);

    ~Customer();
};