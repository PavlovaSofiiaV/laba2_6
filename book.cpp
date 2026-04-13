//
// Created by User on 04.03.2026.
//
#include "book.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
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

void Book::save(std::ofstream& file) const {
    file << title << "|"
         << author << "|"
         << year << "|"
         << pages << "|\n";
}
