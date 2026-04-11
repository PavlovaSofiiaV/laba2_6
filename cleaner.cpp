//
// Created by User on 06.04.2026.
//

#include "cleaner.h"

#include <iostream>

Cleaner::Cleaner() : Employee("None", 0, 0), room_count(0) {}
Cleaner::Cleaner(std::string name) : Employee(name,0, 0,login, password), room_count(0) {}
Cleaner::Cleaner(std::string name, int salary) : Employee(name,salary, 0,login, password),room_count (0) {}
Cleaner::Cleaner(std::string name, int salary, int work_days) : Employee(name,salary, work_days,login, password), room_count(0) {}
Cleaner::Cleaner(std::string name, int salary, int work_days, int room) :Employee(name, salary, work_days,login, password), room_count(room) {}

void Cleaner::showProfession() {
    std::cout<< "\nName: " << name << "ia a leaner\n";
}
void Cleaner::activity() {
    std::cout<<"\n" << name << " cleans the library";
}
void Cleaner::showRole() {
    std::cout<< "\nName: " << name<<" is a cleaner";
}

Cleaner::~Cleaner() {

}
