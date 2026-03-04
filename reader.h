//
// Created by User on 04.03.2026.
//

#ifndef LABA2_6_READER_H
#define LABA2_6_READER_H
#include <string>

class reader {
    public:
    std::string name;
    std::string adrees;
    int number ;
    int book_count;
public:
    reader();
    reader(std::string new_name);
    reader(std::string new_name, std::string new_adrees);
    reader(std::string new_name, std::string new_adrees, int new_number);
    reader(std::string new_name, std::string new_adrees, int new_number, int book_count);
    void aboutreader();
};
#endif //LABA2_6_READER_H