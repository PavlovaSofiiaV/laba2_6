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

    void showName();
    void showBase();
    virtual void showProfession();
    virtual void showBook();
    virtual void activity();
    virtual void showRole()=0;


    virtual ~Person();
};




#endif //LABA2_6_PERSON_H