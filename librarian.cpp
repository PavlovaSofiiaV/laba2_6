//
// Created by User on 30.03.2026.
//
#include "librarian.h"
#include <iostream>

Librarian::Librarian() : Employee("None", 0, 0), books_managed(0) {
    std::cout << "Librarian constructor\n";
}

Librarian::Librarian(std::string name, int salary, int work_days, int books)
    : Employee(name, salary, work_days), books_managed(books) {
    std::cout << "Librarian constructor\n";
}

Librarian::~Librarian() {
    std::cout << "Librarian destructor\n";
}

void Librarian::about_librarian() {
    std::cout << "Name: " << name << "\n"
              << "Books managed: " << books_managed << "\n";
}
