#include <iostream>
#include "book.h"
#include "reader.h"
#include "employee.h"



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
    cout<<"\n==========About Reader==========\n";
    reader reader1;
    reader reader2("Pavlova Sofiia");
    reader reader3("Shyshko Ruslana","Nebesnoi Sotni 4v");
    reader reader4("Rozhman Damir", "Nebesnoi Sotni 2",145);
    reader reader5("Hlavachuk Bohdan", "Heroes of the Maidan",43,5);

    reader1.aboutreader();
    reader2.aboutreader();
    reader3.aboutreader();
    reader4.aboutreader();
    reader5.aboutreader();

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