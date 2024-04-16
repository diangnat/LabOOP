//
// Created by user on 12.04.2024.
//
#include "Person.h"
#include <iostream>

Person::Person()
:name(""),age(0){}

Person::Person(std::string name):name(name),age(0) {}

Person::Person(std::string name, int age)
:name(name),age(age){}

Person::~Person() {}

void Person::setAge(int newage) {age = newage;}

void Person::setName(std::string newname) {name = newname;}

void Person::displayInfo() {
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
