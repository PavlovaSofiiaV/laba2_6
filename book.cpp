//
// Created by User on 04.03.2026.
//
#include "book.h"
#include <string>
#include <iostream>
int Book::book_count = 0;
Book::Book(): title {"None"}, author{"None"}, year {0}, pages {0} {book_count++;}
Book::Book(std::string new_title): title {new_title}, author{"None"}, year {0}, pages {0} {book_count++;}
Book::Book(std::string new_title, std::string new_author): title {new_title}, author{new_author}, year {0}, pages {0} {book_count++;}
Book::Book(std::string new_title, std::string new_author, int new_year):  title {new_title}, author{new_author}, year {new_year}, pages {0} {book_count++;}
Book::Book(std::string new_title, std::string new_author, int new_year, int new_pages):title {new_title}, author{new_author}, year {new_year}, pages {new_pages} {book_count++;}
Book::Book(const Book& other): title{other.title},author{other.author},year{other.year},pages{other.pages} {book_count++;}//copy constructor
Book::~Book(){}
void Book::showBookCount() {
    std::cout << "\nTotal books: " << book_count;
}
void Book::aboutbook()const {
    std::cout << std::endl<< "Title: " << title << "\n"
              << "Author: " << author << "\n"
              << "Year: " << year << "\n"
              << "Pages: " << pages
              <<"\n-----------------------";
}
std::string Book::getTitle() const {
    return title;
}
bool Book::operator==(const Book& other) const {
    return this->author == other.author && this->title == other.title;
}
std::ostream& operator<<(std::ostream& os, const Book& b) {
    os << "\nTitle: " << b.title << "\n"
        << "Author: " << b.author << "\n"
        << "Year: " << b.year << "\n"
        << "Pages: " << b.pages
        <<"\n-----------------------";
    return os;
}

std::istream& operator>>(std::istream& is, Book& b) {
    std::cout << "Enter title: ";
    std::getline(is, b.title);
    std::cout << "Enter author: ";
    std::getline(is, b.author);
    std::cout << "Enter year: ";
    is >> b.year;
    std::cout << "Enter pages: ";
    is >> b.pages;
    return is;
}
