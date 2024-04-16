//
// Created by user on 01.03.2024.
//
#include <iostream>
#include <string>
#include "Customer.h"

using namespace std;

Customer::Customer():Person(),phoneNumber("unknown"),address("none") {}

Customer:: Customer(string phone):Person("Unknown") ,phoneNumber(phone), address("none") {}

//Customer:: Customer(string n, string phone) : name(n), phoneNumber(phone) {}

Customer:: Customer(string phone, string addr) : Person("Unknown",0) ,phoneNumber(phone), address(addr) {}

Customer::~Customer() {}

//void Customer:: setName (string n) {name = n; }

void Customer::setPhoneNumber(string phone) {phoneNumber = phone; }

void Customer:: setAddress(string addr) {address = addr; }

void Customer:: displayInfo(){
//    cout << "name " << name <<'\n'
    Person::displayInfo();
         cout<<"phone number "<<phoneNumber<<'\n'
         <<"address "<<address<<'\n';

}
// copy constructor(shallow copy)
//Customer::Customer(const Customer &other){
//    name = other.name;
//    phoneNumber = other.phoneNumber;
//    address = other.address;
//}


//this
Customer::Customer(string &name, string &phoneNumber, string &address) {
    this->phoneNumber = phoneNumber;
    this->address = address ;
    this->phoneNumber = phoneNumber;
    this->address = address;
}

//stream insertion

ostream &operator<<(std::ostream &os, const Customer &customer) {
//    os << "Name: "<<customer.name<<endl;
    os << "Phone number: "<<customer.phoneNumber<<endl;
    os<< "Address: "<<customer.address<<endl;
    return os;
}

//stream  extraction
istream& operator>>(istream& is, Customer& customer){
//    cout<<"Enter name: "<<endl;
//    is>>customer.name;
    cout<<"Enter phone number: "<<endl;
    is>>customer.phoneNumber;
    cout<<"Enter address: "<<endl;
    is>>customer.address;
}

