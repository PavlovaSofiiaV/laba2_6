#include "book.h"
#include <iostream>


int main() {
    book book1;
    book book2("The Inheritance Games");
    book book3("The Inheritance Games", "Jennifer Lynn Barnes");
    book book4("The Inheritance Games", "Jennifer Lynn Barnes", 2020);
    book book5("The Inheritance Games", "Jennifer Lynn Barnes", 2020, 384);

    book1.aboutbook();
    book2.aboutbook();
    book3.aboutbook();
    book4.aboutbook();
    book5.aboutbook();
    return 0;
}