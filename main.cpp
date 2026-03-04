#include "book.h"
#include "reader.h"

#include <iostream>
using namespace std;


int main() {
    cout<<"==========About books==========";
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

    cout<<endl;
    cout<<"\n"<<"==========About Reader==========";
    reader reader1;
    reader reader2("Pavlova Sofiia");
    reader reader3("Shishko Ruslan","Nebesnoi Sotni 4v");
    reader reader4("Rozhman Damir", "Nebesnoi Sotni 2",145);
    reader reader5("Hlavachuk Bohdan", "Heroes of the Maidan",43,5);

    reader1.aboutreader();
    reader2.aboutreader();
    reader3.aboutreader();
    reader4.aboutreader();
    reader5.aboutreader();

    cout<<endl;
    cout<<"\n"<<"==========About Emploee============";


    return 0;
}