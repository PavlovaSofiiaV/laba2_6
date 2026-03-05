//
// Created by User on 04.03.2026.
//

#ifndef LABA2_6_EMPLOYEE_H
#define LABA2_6_EMPLOYEE_H
#include <string>

class Employee {
private:
    std::string name;
    int work_days;
    int salary;
public:
    Employee();
    Employee(std::string new_name);
    Employee(std::string new_name, int new_salary);
    Employee(std::string new_name, int new_salary, int new_work_days);
    Employee(int new_salary, int new_work_days);
    ~Employee();

    void about_employee();
};
#endif //LABA2_6_EMPLOYEE_H