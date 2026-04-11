//
// Created by User on 30.03.2026.
//
#include "librarian.h"
#include <iostream>

Librarian::Librarian() : Employee("None",0,0,login,password), books_managed(0) {}
Librarian::Librarian(std::string name) : Employee(name,0, 0,login,password), books_managed(0) {}
Librarian::Librarian(std::string name, int salary) : Employee(name,salary, 0,login, password), books_managed(0) {}
Librarian::Librarian(std::string name, int salary, int work_days) : Employee(name,salary, work_days,login, password), books_managed(0) {}
Librarian::Librarian(std::string name, int salary, int work_days, int books) :Employee(name, salary, work_days,login, password), books_managed(books) {}


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
