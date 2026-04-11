//
// Created by User on 30.03.2026.
//
#include "librarian.h"
#include <iostream>

Librarian::Librarian() : Employee("None",login,password,0,0), books_managed(0) {}
Librarian::Librarian(std::string name,std::string login, std::string password) : Employee(name,login, password,0,0), books_managed(0) {}
Librarian::Librarian(std::string name,std::string login, std::string password, int salary) : Employee(name,login, password, salary, 0), books_managed(0) {}
Librarian::Librarian(std::string name,std::string login, std::string password, int salary, int work_days) : Employee(name,login, password,salary, work_days), books_managed(0) {}
Librarian::Librarian(std::string name, std::string login, std::string password,int salary, int work_days, int books) :Employee(name, login, password,salary, work_days), books_managed(books) {}


void Librarian::about_librarian() {
    std::cout << "Name: " << name << "\n"
              << "Salary: " << salary << "\n"
              << "Work days: " << work_days << "\n"
              << "Books managed: " << books_managed
              <<"\n-----------------------\n";
}
void Librarian::showProfession(){
    std::cout<< "\nName: " << name << " is a librarian";
}
void Librarian::activity()  {
    std::cout<<"\n" << name << " organizes books and helps readers";
}
void Librarian::showRole() {
    std::cout<< "\nName: " << name<<" is a librarian";
}
Librarian::~Librarian() {}
