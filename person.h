//
// Created by User on 30.03.2026.
//

#ifndef LABA2_6_PERSON_H
#define LABA2_6_PERSON_H
#include <string>

class Person {
    protected:
    std::string name;
public:
    Person();
    Person(std::string name);
    Person &operator=(const Person &other);

    ~Person();
};




#endif //LABA2_6_PERSON_H