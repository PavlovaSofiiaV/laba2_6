#include <iostream>
#include "book.h"
#include "reader.h"
#include "employee.h"



using namespace std;


int main() {
    cout<<"==========About books==========";
    Book book1;
    Book book2("The Inheritance Games");
    Book book3("The Inheritance Games", "Jennifer Lynn Barnes");
    Book book4("The Inheritance Games", "Jennifer Lynn Barnes", 2020);
    Book book5("The Inheritance Games", "Jennifer Lynn Barnes", 2020, 384);
    Book book6=book3;
    const Book book7("The Inheritance Games");

    book1.aboutbook();
    book2.aboutbook();
    book3.aboutbook();
    book4.aboutbook();
    book5.aboutbook();
    book6.aboutbook();
    book7.aboutbook();

    cout<<"\nEquals books:";
    if (book3==book4) {
        cout<<"\nBook 3 equals Book 4\n";
    }

    cout<<endl;
    cout<<"\n==========About Reader==========\n";
    Reader reader1;
    Reader reader2("Pavlova Sofiia");
    Reader reader3("Shyshko Ruslana","Nebesnoi Sotni 4v");
    Reader reader4("Rozhman Damir", "Nebesnoi Sotni 2",145);
    Reader reader5("Hlavachuk Bohdan", "Heroes of the Maidan",43,5);
    Reader reader6=Reader("Frayk Oleg");
    Reader::showReaderCount();
    cout<<endl;

    reader1.aboutreader();
    reader2.aboutreader();
    reader3.aboutreader();
    reader4.aboutreader();
    reader5.aboutreader();
    reader6.aboutreader();

    cout<<endl;
    cout<<"\n==========About Emploee============\n";
    Employee employee1;
    Employee employee2("Pavlova Sofiia");
    Employee employee3("Shyshko Ruslana",1000000);
    Employee employee4("Rozhman Damir",16780,30);
    Employee employee5(18900, 18);

    employee1.about_employee();
    employee2.about_employee();
    employee3.about_employee();
    employee4.about_employee();
    employee5.about_employee();
    return 0;
}