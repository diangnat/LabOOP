//
// Created by user on 12.04.2024.
//

#ifndef LABA2_3_PERSON_H
#define LABA2_3_PERSON_H

#include <iostream>

using namespace std;

class Person{
private:
string name;
int age;

public:
    Person();
    Person(string name);
    Person(string name,int age);
    ~Person();

    void setName(string newname);
    void setAge(int newage);
    void displayInfo();


};

#endif //LABA2_3_PERSON_H


