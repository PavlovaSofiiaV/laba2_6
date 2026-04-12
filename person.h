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

    virtual void showBook();
    virtual void showRole()=0;
    virtual void showInfo() = 0;
    virtual bool checkIn( std::string& l,  std::string& p)  = 0;
    virtual std::string getRol()=0;
    //friend std::ostream& operator<<(std::ostream& out, const Person& p);
    virtual void save(std::ostream& os) const;
    virtual ~Person();
};




#endif //LABA2_6_PERSON_H