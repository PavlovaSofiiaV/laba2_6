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
    Librarian(std::string name);
    Librarian(std::string name, int salary);
    Librarian(std::string name, int salary, int work_days);
    Librarian(std::string name, int salary, int work_days, int books);
    void about_librarian();
    void activity() override;
    void showProfession ()override;
    void showRole() override;
    virtual ~Librarian();
};

#endif //LABA2_6_LIBRARIAN_H