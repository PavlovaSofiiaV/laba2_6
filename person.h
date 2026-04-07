//
// Created by User on 30.03.2026.
//

#ifndef LABA2_6_PERSON_H
#define LABA2_6_PERSON_H
#include <string>
#include <iostream>

class Person {
    protected:
    std::string name;
public:
    Person();
    Person(std::string name);
    Person &operator=(const Person &other);

    virtual void showName()=0;
    //void showBase();
    virtual void showProfession()=0;
    virtual void showBook()=0;
    virtual void activity()=0;
    virtual void showRole()=0;


    virtual ~Person();
};




#endif //LABA2_6_PERSON_H