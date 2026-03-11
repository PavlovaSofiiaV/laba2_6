#include <string>
#include "employee.h"
#include <iostream>

Employee::Employee() {
    name="None";
    salary=0;
    work_days=0;
}
Employee::Employee(std::string new_name) {
    this->name=new_name;
    salary=0;
    work_days=0;
}
Employee::Employee(std::string new_name, int new_salary) {
    this->name=new_name;
    this->salary=new_salary;
    work_days=0;
}
Employee::Employee(std::string new_name, int new_salary,int new_work_days) {
    this->name=new_name;
    this->salary=new_salary;
    this->work_days=new_work_days;
}
Employee::Employee( int new_salary, int new_work_days) {
    name="None";
    this->salary=new_salary;
    this->work_days=new_work_days;
}
Employee::~Employee(){}
void Employee::about_employee() {
    std::cout << "Name: " << name << "\n"
              << "Salary: " << salary << "\n"
              << "Work days: " << work_days
              <<"\n-----------------------\n";
}




