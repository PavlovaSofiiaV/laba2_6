//
// Created by User on 04.03.2026.
//
#include "reader.h"
#include <string>
#include <iostream>
#include"book.h"
int Reader::reader_count = 0;
Reader::Reader() :Person("None"), book("None"), adrees{"None"}, number {0}, book_count {0} {
    reader_count++;
}
Reader::Reader(std::string name,Book b): Person(name),book(b), adrees{"None"}, number {0}, book_count {0} {
    reader_count++;
}
Reader::Reader(std::string name,std::string new_adrees,Book b): Person(name),book(b),adrees{new_adrees}, number {0}, book_count {0} {
    reader_count++;
}
Reader::Reader(std::string name,std::string new_adrees, int new_number,Book b):Person(name),book(b), adrees{new_adrees}, number {new_number}, book_count {0} {
    reader_count++;
}
Reader::Reader(std::string name,std::string new_adrees, int new_number, int new_book_count,Book b):Person(name),book(b), adrees{new_adrees}, number {new_number}, book_count {new_book_count} {
    reader_count++;
}
Reader::Reader(Reader&& other):Person(std::move(other)),book(std::move(other.book)), adrees(std::move(other.adrees)), number (other.number), book_count (other.book_count) {
    reader_count++;
}//Move constructor
Reader::Reader(Reader& other):Person(other), book(other.book), adrees(other.adrees), number(other.number),book_count(other.book_count) {
    reader_count++;
}//copy constructor
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
void Reader::aboutreader() {
    std::cout << "Name: " << name << "\n"
            << "Adress: " << adrees << "\n"
            << "Phone number: " << number << "\n"
            << "Amount of books: " << book_count<<"\n"
            <<"Books name: "<<book.getTitle()<<"\n"
            <<"\n------------------------\n";
}
void Reader::showReaderCount() {
    std::cout << "Total readers created: " << reader_count << std::endl;
}
Reader::~Reader() {
    reader_count--;
}
