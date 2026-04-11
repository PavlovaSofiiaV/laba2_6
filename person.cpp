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
void Person::showBase() {
     std::cout<< "\nName: " << name<< " is a person\n";
}
void Person::showProfession() {
    std::cout<< "\nName: " << name << " is reader or employee";
}
void Person::showBook() {
    std::cout << "No information about books";
}
void Person::activity() {
    std::cout<<"\n" << name << " does something";
}
void Person::showRole() {
   std::cout << "\nName: " << name << std::endl;
}
bool Person::checkIn( std::string& l,  std::string& p)  {
    return (login == l && password == p);
}

Person::~Person() {}