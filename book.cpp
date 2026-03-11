//
// Created by User on 04.03.2026.
//
#include "book.h"
#include <string>
#include <iostream>

Book::Book(): title {"None"}, author{"None"}, year {0}, pages {0} {}
Book::Book(std::string new_title): title {new_title}, author{"None"}, year {0}, pages {0} {}
Book::Book(std::string new_title, std::string new_author): title {new_title}, author{new_author}, year {0}, pages {0} {}
Book::Book(std::string new_title, std::string new_author, int new_year):  title {new_title}, author{new_author}, year {new_year}, pages {0} {}
Book::Book(std::string new_title, std::string new_author, int new_year, int new_pages):title {new_title}, author{new_author}, year {new_year}, pages {new_pages} {}
Book::Book(const Book& other): title{other.title},author{other.author},year{other.year},pages{other.pages} {}
Book::~Book(){}
void Book::aboutbook()const {
    std::cout << std::endl<< "Title: " << title << "\n"
              << "Author: " << author << "\n"
              << "Year: " << year << "\n"
              << "Pages: " << pages
              <<"\n-----------------------";
}
bool Book::operator==(const Book& other) const {
    return this->author == other.author && this->title == other.title;
}
std::ostream& operator<<(std::ostream& out, const Book& b) {
    out << "\nTitle: " << b.title << "\n"
        << "Author: " << b.author << "\n"
        << "Year: " << b.year << "\n"
        << "Pages: " << b.pages
        <<"\n-----------------------";

    return out; // завжди повертаємо потік
}

// Ввід книги
std::istream& operator>>(std::istream& in, Book& b) {
    std::cout << "Enter title: ";
    std::getline(in, b.title);
    std::cout << "Enter author: ";
    std::getline(in, b.author);
    std::cout << "Enter year: ";
    in >> b.year;
    std::cout << "Enter pages: ";
    in >> b.pages;
    in.ignore(); // щоб пропустити '\n' після числа
    return in;   // завжди повертаємо потік
}