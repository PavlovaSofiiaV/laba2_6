//
// Created by User on 06.04.2026.
//

#include "cleaner.h"

#include <iostream>

Cleaner::Cleaner() : Employee("None", 0, 0), room_count(0) {}
Cleaner::Cleaner(std::string name) : Employee(name,0, 0), room_count(0) {}
Cleaner::Cleaner(std::string name, int salary) : Employee(name,salary, 0),room_count (0) {}
Cleaner::Cleaner(std::string name, int salary, int work_days) : Employee(name,salary, work_days), room_count(0) {}
Cleaner::Cleaner(std::string name, int salary, int work_days, int room) :Employee(name, salary, work_days), room_count(room) {}

void Cleaner::showProfession() {
    std::cout << "Cleaner\n";
}

Cleaner::~Cleaner() {

}
