//
// Created by User on 04.03.2026.
//

#ifndef LABA2_6_BOOK_H
#define LABA2_6_BOOK_H
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;
    int pages;
public:
    Book();
    Book(std::string new_title);
    Book(std::string new_title, std::string new_author);
    Book(std::string new_title, std::string new_author, int new_year);
    Book(std::string new_title, std::string new_author, int new_year, int new_pages);
    Book(const Book& other);
    ~Book();
    void aboutbook() const;
    bool operator==(const Book& other) const;
    friend std::ostream& operator<<(std::ostream& out, const Book& b);
    friend std::istream& operator>>(std::istream& in, Book& b);
};
#endif //LABA2_6_BOOK_H