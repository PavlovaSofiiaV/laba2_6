//
// Created by User on 30.03.2026.
//

#ifndef LABA2_6_LIBRARIAN_H
#define LABA2_6_LIBRARIAN_H
#include "employee.h"

class Librarian final : public Employee {
private:
    int books_managed;
public:
    Librarian();
    Librarian(std::string name,std::string login, std::string password);
    Librarian(std::string name,std::string login, std::string password,int salary);
    Librarian(std::string name,std::string login, std::string password, int salary, int work_days);
    Librarian(std::string name,std::string login, std::string password, int salary, int work_days, int books);

    void showRole() override;
    void showInfo() override;
    std::string getRol()override;
    virtual ~Librarian();

};

#endif //LABA2_6_LIBRARIAN_H