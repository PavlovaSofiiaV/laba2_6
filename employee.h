//
// Created by User on 04.03.2026.
//

#ifndef LABA2_6_EMPLOYEE_H
#define LABA2_6_EMPLOYEE_H
#include <string>
#include "person.h"

class Employee:public Person{
protected:
    int work_days;
    int salary;
public:
    Employee();
    Employee(std::string name,std::string login, std::string password);
    Employee(std::string name,std::string login, std::string password, int salary);
    Employee(std::string name,std::string login, std::string password, int salary, int work_days);
    Employee(std::string login, std::string password,int salary, int work_days);

    void showBook() final;
    void showRole()override;
    void showInfo() override;
    bool checkIn( std::string& l,  std::string& p)  override;
    std::string getRol()override;


    virtual ~Employee();
};
#endif //LABA2_6_EMPLOYEE_H