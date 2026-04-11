//
// Created by User on 06.04.2026.
//

#include "cleaner.h"

#include <iostream>

Cleaner::Cleaner() : Employee("None", login, password), room_count(0) {}
Cleaner::Cleaner(std::string name,std::string login, std::string password) : Employee(name,login, password,0, 0), room_count(0) {}
Cleaner::Cleaner(std::string name,std::string login, std::string password, int salary) : Employee(name,login, password, salary, 0),room_count (0) {}
Cleaner::Cleaner(std::string name,std::string login, std::string password, int salary, int work_days) : Employee(name,login, password,salary, work_days), room_count(0) {}
Cleaner::Cleaner(std::string name,std::string login, std::string password, int salary, int work_days, int room) :Employee(name,login, password,salary, work_days), room_count(room) {}

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
