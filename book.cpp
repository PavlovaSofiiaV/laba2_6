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
void Book::aboutbook() {
    std::cout << std::endl<< "Title: " << title << "\n"
              << "Author: " << author << "\n"
              << "Year: " << year << "\n"
              << "Pages: " << pages
              <<"\n-----------------------";
}