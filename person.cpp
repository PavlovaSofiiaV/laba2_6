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
void Person::showName() {
    //std::cout << "\nName: " << name;
}
// void Person::showBase() {
//     std::cout << " is a person\n";
// }
void Person::showProfession() {
    //std::cout << " is reader or employee";
}
void Person::showBook() {
   // std::cout << "No information about books";
}
void Person::activity() {
    //std::cout<<"\n" << name << " does something";
}
void Person::showRole() {
   // std::cout << "\nName: " << name << std::endl;
}
Person::~Person() {}