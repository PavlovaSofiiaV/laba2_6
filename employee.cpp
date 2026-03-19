#include <string>
#include "employee.h"
#include <iostream>

Employee::Employee() {
    name="None";
    salary=0;
    work_days=0;
}
Employee::Employee(std::string name) {
    this->name=name;
    salary=0;
    work_days=0;
}
Employee::Employee(std::string name, int salary) {
    this->name=name;
    this->salary=salary;
    work_days=0;
}
Employee::Employee(std::string name, int salary,int work_days) {
    this->name=name;
    this->salary=salary;
    this->work_days=work_days;
}
Employee::Employee( int salary, int work_days) {
    name="None";
    this->salary=salary;
    this->work_days=work_days;
}
Employee::~Employee(){}
void Employee::about_employee() {
    std::cout << "Name: " << name << "\n"
              << "Salary: " << salary << "\n"
              << "Work days: " << work_days
              <<"\n-----------------------\n";
}




