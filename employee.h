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
    void showBase();
    void showProfession ()override;
    void showBook() final;
    void activity() override;
    void showRole()override;

    bool checkIn( std::string& l,  std::string& p)  override;

    virtual ~Employee();

    void about_employee();
};
#endif //LABA2_6_EMPLOYEE_H