//
// Created by User on 04.03.2026.
//

#ifndef LABA2_6_BOOK_H
#define LABA2_6_BOOK_H
#include <string>

class book {
private:
    std::string title;
    std::string author;
    int year;
    int pages;
public:
    book();

    book(std::string new_title);
    book(std::string new_title, std::string new_author);
    book(std::string new_title, std::string new_author, int new_year);
    book(std::string new_title, std::string new_author, int new_year, int new_pages);
    void aboutbook();
};
#endif //LABA2_6_BOOK_H