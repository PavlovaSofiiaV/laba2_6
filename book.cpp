//
// Created by User on 04.03.2026.
//
#include "book.h"
#include <string>
#include <iostream>

book::book(): title {"None"}, author{"None"}, year {0}, pages {0} {}
book::book(std::string new_title): title {new_title}, author{"None"}, year {0}, pages {0} {}
book::book(std::string new_title, std::string new_author): title {new_title}, author{new_author}, year {0}, pages {0} {}
book::book(std::string new_title, std::string new_author, int new_year):  title {new_title}, author{new_author}, year {new_year}, pages {0} {}
book::book(std::string new_title, std::string new_author, int new_year, int new_pages):title {new_title}, author{new_author}, year {new_year}, pages {new_pages} {}
void book::aboutbook() {
    std::cout << std::endl<< "Title: " << title << "\n"
              << "Author: " << author << "\n"
              << "Year: " << year << "\n"
              << "Pages: " << pages
              <<"\n"<<"-----------------------";
}