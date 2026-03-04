#include <string>
#include "employee.h"
#include <iostream>

employee::employee() {
    name="None";
    work_days=0;
    salary=0;
}
employee::employee(std::string new_name) {
    name=new_name;
    work_days=0;
    salary=0;
}
employee::employee(std::string new_name, int new_work_days) {
    name=new_name;
    work_days=new_work_days;
    salary=0;
}
employee::employee(std::string new_name, int new_work_days, int new_salary) {
    name=new_name;
    work_days=new_work_days;
    salary=new_salary;
}
employee::employee( int new_salary, int new_work_days) {
    name="None";
    work_days=new_work_days;
    salary=new_salary;
}
void employee::about_employee() {
    std::cout << "Name: " << name << "\n"
              << "Salary: " << salary << "\n"
              << "Work days: " << work_days
              <<"\n-----------------------\n";
}




