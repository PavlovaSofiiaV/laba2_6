//
// Created by User on 04.03.2026.
//

#ifndef LABA2_6_READER_H
#define LABA2_6_READER_H
#include <string>
#include "person.h"
#include "book.h"
#include "ILibraryUse.h"

class Reader:public Person, public ILibraryUse {
private:
    std::string adrees;
    std::string number ;
    int book_count;
    static int reader_count;
    Book book;
public:

    Reader();
    Reader(std::string name,std::string login);
    Reader(std::string name,std::string login, std::string new_adrees);
    Reader(std::string name,std::string login, std::string new_adrees,  std::string new_number);
    Reader(std::string name,std::string login, std::string new_adrees,  std::string new_number, int new_book_count);

    Reader &operator=(const Reader &other);

    static void showReaderCount();
    void showBook() override;
    void showRole() override;
    void takeBook()override;
    void returnBook()override;
    void showStatus()override;

    void showInfo() override;
    bool checkIn( std::string& l,  std::string& p)  override;
    std::string getRol()override;
    void save(std::ostream& os)const override;
    //friend std::ostream& operator<<(std::ostream& out, const Reader& r);


   virtual ~Reader();
};
#endif //LABA2_6_READER_H