//
// Created by User on 04.03.2026.
//

#ifndef LABA2_6_READER_H
#define LABA2_6_READER_H
#include <string>

class Reader {
private:
    std::string name;
    std::string adrees;
    int number ;
    int book_count;
    static int reader_count;
public:
    Reader();
    Reader(std::string new_name);
    Reader(std::string new_name, std::string new_adrees);
    Reader(std::string new_name, std::string new_adrees, int new_number);
    Reader(std::string new_name, std::string new_adrees, int new_number, int book_count);
    Reader(Reader&& other);//Move constructor
    void aboutreader();
    static void showReaderCount();
    ~Reader();
};
#endif //LABA2_6_READER_H