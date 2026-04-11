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
    std::string login;
    std::string password;
public:
    Person();
    Person(std::string name);
    Person(std::string name,std::string login, std::string password);
    Person &operator=(const Person &other);

    void showBase();
    virtual void showProfession();
    virtual void showBook();
    virtual void activity();
    virtual void showRole()=0;


    virtual bool checkIn( std::string& l,  std::string& p)  = 0;

    virtual ~Person();
};




#endif //LABA2_6_PERSON_H