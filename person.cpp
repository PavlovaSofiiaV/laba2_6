//
// Created by User on 30.03.2026.

#include "person.h"

Person::Person() {
    name="None";
}
Person::Person(std::string name) {
    this->name = name;
}
Person::Person(std::string name,std::string login, std::string password) {
    this -> name = name;
    this -> login = login;
    this -> password = password;
}
Person& Person::operator=(const Person& other) {
    if (this != &other) {
        name = other.name;
    }
    return *this;
}

void Person::showBook() {
    std::cout << "No information about books";
}
void Person::showRole() {
   std::cout << "\nName: " << name << std::endl;
}
bool Person::checkIn( std::string& l,  std::string& p)  {
    return (login == l && password == p);
}
void Person::showInfo() {}
std::string Person::getRol() { return " "; }

Person::~Person() {}
