//
// Created by User on 06.04.2026.
//

#ifndef LABA2_6_CLEANER_H
#define LABA2_6_CLEANER_H
#include "employee.h"

class Cleaner:public Employee{
    private:
    int room_count;
    public:
    Cleaner();
    Cleaner(std::string name);
    Cleaner(std::string name, int salary);
    Cleaner(std::string name, int salary, int work_days);
    Cleaner(std::string name, int salary, int work_days, int books);
    Cleaner(std::string name, int salary, int work_days, int books, int room);

    void showProfession() ;
    virtual ~Cleaner();

};


#endif //LABA2_6_CLEANER_H