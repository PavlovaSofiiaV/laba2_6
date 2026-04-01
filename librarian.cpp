//
// Created by User on 30.03.2026.
//
#include "librarian.h"
#include <iostream>

Librarian::Librarian() : Employee("None", 0, 0), books_managed(0) {}
Librarian::Librarian(std::string name) : Employee(name,0, 0), books_managed(0) {}
Librarian::Librarian(std::string name, int salary) : Employee(name,salary, 0), books_managed(0) {}
Librarian::Librarian(std::string name, int salary, int work_days) : Employee(name,salary, work_days), books_managed(0) {}
Librarian::Librarian(std::string name, int salary, int work_days, int books) :Employee(name, salary, work_days), books_managed(books) {}

Librarian::~Librarian() {}

void Librarian::about_librarian() {
    std::cout << "Name: " << name << "\n"
              << "Salary: " << salary << "\n"
              << "Work days: " << work_days << "\n"
              << "Books managed: " << books_managed
              <<"\n-----------------------\n";
}
