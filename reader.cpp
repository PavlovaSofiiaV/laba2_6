//
// Created by User on 04.03.2026.
//
#include "reader.h"
#include <string>
#include <iostream>
#include"book.h"
int Reader::reader_count = 0;
Reader::Reader() :Person("None"), book("None"), adrees{"None"}, number {"None"}, book_count {0} {
    reader_count++;
}
Reader::Reader(std::string name,std::string login): Person(name,login,password),book{"None"}, adrees{"None"}, number {"None"}, book_count {0} {
    reader_count++;
}
Reader::Reader(std::string name,std::string login,std::string new_adrees): Person(name,login,password),adrees{new_adrees}, number {"None"}, book_count {0} {
    reader_count++;
}
Reader::Reader(std::string name,std::string login,std::string new_adrees,  std::string new_number):Person(name,login,password), adrees{new_adrees}, number {new_number}, book_count {0} {
    reader_count++;
}
Reader::Reader(std::string name,std::string login,std::string new_adrees,  std::string new_number, int new_book_count):Person(name,login,password), adrees{new_adrees}, number {new_number}, book_count {new_book_count} {
    reader_count++;
}
Reader& Reader::operator=(const Reader& other) {
    if (this != &other) {
        Person::operator=(other);
        book = other.book;
        adrees = other.adrees;
        number = other.number;
        book_count = other.book_count;
    }
    return *this;
}
void Reader::showReaderCount() {
    std::cout << "Total readers created: " << reader_count << std::endl;
}
void Reader::showBook()  {
    std::cout<< "\nName: " << name<<" has: " << book.getTitle();
}
void Reader::showRole() {
    std::cout<< name << " is a reader";
}
void Reader::takeBook() {
    std::cout<< "\nName: "  << name << " takes a book\n";
}
void Reader::returnBook() {
    std::cout<< "\nName: "  << name << " returns a book\n";
}
void Reader::showStatus() {
    std::cout << "\nName: " << name << " is an active reader\n";
}

bool Reader::checkIn( std::string& l,  std::string& p)  {
    return login == l && password == p;
}
void Reader::showInfo() {
    std::cout << "\nAdress: " << adrees << "\n"
            << "Phone number: " << number << "\n"
            << "Amount of books: " << book_count<<"\n"
            << "Has now: "<<book.getTitle()
            <<"\n------------------------\n";
}
std::string Reader::getRol() {
    return "user";
}
// std::ostream& operator<<(std::ostream& os, const Reader& r) {
//     os << "\nName: " << r.name << "\n"
//         << "Adress: " << r.adrees << "\n"
//         << "Phone number: " << r.number << "\n"
//         << "Amount of books: " << r.book_count<<"\n"
//         <<"\n-----------------------";
//     return os;
// }
void Reader::save(std::ostream& os) const {
    os<< "\nName: " << name << "\n"
         << "Adress: " << adrees << "\n"
         << "Phone number: " << number << "\n"
         << "Amount of books: " << book_count<<"\n"
         <<"\n-----------------------";
}

Reader::~Reader() {
    reader_count--;
}
