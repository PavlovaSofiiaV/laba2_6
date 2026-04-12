#include <string>
#include "employee.h"
#include <iostream>
#include "person.h"

Employee::Employee(): Person("None")  {
    salary=0;
    work_days=0;
}
Employee::Employee(std::string name,std::string login, std::string password): Person(name,login,password) {
    salary=0;
    work_days=0;
}
Employee::Employee(std::string name,std::string login, std::string password, int salary):Person(name,login,password) {
    this->salary=salary;
    work_days=0;
}
Employee::Employee(std::string name,std::string login, std::string password, int salary,int work_days):Person(name,login,password) {
    this->salary=salary;
    this->work_days=work_days;
}
Employee::Employee( std::string login, std::string password,int salary, int work_days): Person("None",login,password) {
    this->salary=salary;
    this->work_days=work_days;
}

void Employee::showBook() {
    std::cout<< "\nName: " << name << " has no book";
}
void Employee::showRole() {
    std::cout<< name << " is employee\n";
}
bool Employee::checkIn( std::string& l,  std::string& p)  {
    return login == l && password == p;
}
void Employee::showInfo() {
    std::cout << "Salary: " << salary << "\n"
              << "Work days: " << work_days
              <<"\n-----------------------\n";
}
std::string Employee::getRol() {
    return"admin";
}
Employee::~Employee(){}
