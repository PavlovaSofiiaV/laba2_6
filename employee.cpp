#include <string>
#include "employee.h"
#include <iostream>

Employee::Employee() {
    name="None";
    salary=0;
    work_days=0;
}
Employee::Employee(std::string new_name) {
    name=new_name;
    salary=0;
    work_days=0;
}
Employee::Employee(std::string new_name, int new_salary) {
    name=new_name;
    salary=new_salary;
    work_days=0;
}
Employee::Employee(std::string new_name, int new_salary,int new_work_days) {
    name=new_name;
    salary=new_salary;
    work_days=new_work_days;
}
Employee::Employee( int new_salary, int new_work_days) {
    name="None";
    salary=new_salary;
    work_days=new_work_days;
}
Employee::~Employee(){}
void Employee::about_employee() {
    std::cout << "Name: " << name << "\n"
              << "Salary: " << salary << "\n"
              << "Work days: " << work_days
              <<"\n-----------------------\n";
}




