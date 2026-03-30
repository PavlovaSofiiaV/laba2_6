//
// Created by User on 04.03.2026.
//

#ifndef LABA2_6_EMPLOYEE_H
#define LABA2_6_EMPLOYEE_H
#include <string>
#include "person.h"

class Employee:public Person{
private:
    int work_days;
    int salary;
public:
    Employee();
    Employee(std::string name);
    Employee(std::string name, int salary);
    Employee(std::string name, int salary, int work_days);
    Employee(int salary, int work_days);
    ~Employee();

    void about_employee();
};
#endif //LABA2_6_EMPLOYEE_H