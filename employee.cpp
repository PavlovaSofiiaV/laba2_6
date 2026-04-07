#include <string>
#include "employee.h"
#include <iostream>
#include "person.h"

Employee::Employee(): Person("None")  {
    salary=0;
    work_days=0;
}
Employee::Employee(std::string name): Person(name) {
    salary=0;
    work_days=0;
}
Employee::Employee(std::string name, int salary):Person(name) {
    this->salary=salary;
    work_days=0;
}
Employee::Employee(std::string name, int salary,int work_days):Person(name) {
    this->salary=salary;
    this->work_days=work_days;
}
Employee::Employee( int salary, int work_days): Person("None") {

    this->salary=salary;
    this->work_days=work_days;
}
// void Employee::showBase() {
//     std::cout << "is an employee\n";
// }
void Employee::showProfession() {
    std::cout << " is employee";
}
void Employee::showBook() {
    std::cout << " has no book";
}
void Employee::activity() {
    std::cout <<"\n"<<name << " works in the library";
}
void Employee::showRole() {
    std::cout<< "\nName: " << name << " is employee";
}
Employee::~Employee(){}
// void Employee::about_employee() {
//     std::cout << "Name: " << name << "\n"
//               << "Salary: " << salary << "\n"
//               << "Work days: " << work_days
//               <<"\n-----------------------\n";
// }