//
// Created by User on 30.03.2026.

#include "person.h"

Person::Person() {
    name="None";
}
Person::Person(std::string name) {
    this -> name = name;
}
Person& Person::operator=(const Person& other) {
    if (this != &other) {
        name = other.name;
    }
    return *this;
}
void Person::showRole() {
    std::cout << "Person\n";
}
void Person::showName() {
    std::cout << "Name: " << name << std::endl;
}
void Person::inforead() {
    std::cout << name << " is not reading a book.\n";
}
