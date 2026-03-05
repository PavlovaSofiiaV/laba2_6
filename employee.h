//
// Created by User on 04.03.2026.
//

#ifndef LABA2_6_EMPLOYEE_H
#define LABA2_6_EMPLOYEE_H
#include <string>

class employee {
    private:
    std::string name;
    int work_days;
    int salary;
    public:
    employee();
    employee(std::string new_name);
    employee(std::string new_name, int new_salary);
    employee(int new_salary, int new_work_days);
    employee(std::string new_name, int new_salary, int new_work_days);
    void about_employee();
    ~employee();
};
#endif //LABA2_6_EMPLOYEE_H