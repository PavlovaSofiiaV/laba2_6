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
void Employee::showBase() {
    std::cout << "is an employee\n";
}
void Employee::showProfession() {
    std::cout<< "\nName: " << name << " is employee";
}
void Employee::showBook() {
    std::cout<< "\nName: " << name << " has no book";
}
void Employee::activity() {
    std::cout <<"\n"<<name << " works in the library";
}
void Employee::showRole() {
    std::cout<< "\nName: " << name << " is employee";
}
bool Employee::checkIn( std::string& l,  std::string& p)  {
    return login == l && password == p;
}

Employee::~Employee(){}
void Employee::about_employee() {
    std::cout << "Name: " << name << "\n"
              << "Salary: " << salary << "\n"
              << "Work days: " << work_days<<"\n"
              << "Login name: " << login << "\n"
              << "Parol: " << password
              <<"\n-----------------------\n";
}