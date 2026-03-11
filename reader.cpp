//
// Created by User on 04.03.2026.
//
#include "reader.h"
#include <string>
#include <iostream>
int Reader::reader_count = 0;
Reader::Reader(): name {"None"}, adrees{"None"}, number {0}, book_count {0} {
    reader_count++;
}
Reader::Reader(std::string new_name):name {new_name}, adrees{"None"}, number {0}, book_count {0} {
    reader_count++;
}
Reader::Reader(std::string new_name,std::string new_adrees):name {new_name}, adrees{new_adrees}, number {0}, book_count {0} {
    reader_count++;
}
Reader::Reader(std::string new_name,std::string new_adrees, int new_number):name {new_name}, adrees{new_adrees}, number {new_number}, book_count {0} {
    reader_count++;
}
Reader::Reader(std::string new_name,std::string new_adrees, int new_number, int new_book_count):name {new_name}, adrees{new_adrees}, number {new_number}, book_count {new_book_count} {
    reader_count++;
}
Reader::Reader(Reader&& other): name{other.name}, adrees{other.adrees}, number {other.number}, book_count {other.book_count} {
    reader_count++;
}
Reader::~Reader() {
    reader_count++;
}
void Reader::aboutreader() {
    std::cout << "Name: " << name << "\n"
              << "Adress: " << adrees << "\n"
              << "Phone number: " << number << "\n"
              << "Amount of books: " << book_count
              <<"\n------------------------\n";
}
void Reader::showReaderCount() {
    std::cout << "Total readers created: " << reader_count << std::endl;
}