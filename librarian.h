//
// Created by User on 30.03.2026.
//

#ifndef LABA2_6_LIBRARIAN_H
#define LABA2_6_LIBRARIAN_H
#include "employee.h"

class Librarian : public Employee {
private:
    int books_managed;

public:
    Librarian();
    Librarian(std::string name, int salary, int work_days, int books);

    void about_librarian();
    ~Librarian();
};

#endif //LABA2_6_LIBRARIAN_H