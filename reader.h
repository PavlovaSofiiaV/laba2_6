//
// Created by User on 04.03.2026.
//

#ifndef LABA2_6_READER_H
#define LABA2_6_READER_H
#include <string>
#include "person.h"
#include "book.h"

class Reader:public Person {//is-a
private:
    std::string adrees;
    int number ;
    int book_count;
    static int reader_count;
    Book book;//has-a
public:

    Reader();
    Reader(std::string name, Book b);
    Reader(std::string name, std::string new_adrees, Book b);
    Reader(std::string name, std::string new_adrees, int new_number, Book b);
    Reader(std::string name, std::string new_adrees, int new_number, int new_book_count, Book b);

    Reader(Reader&& other);//Move constructor
    Reader(Reader& other);

    Reader &operator=(const Reader &other);

    void aboutreader();
    static void showReaderCount();
    ~Reader();
};
#endif //LABA2_6_READER_H