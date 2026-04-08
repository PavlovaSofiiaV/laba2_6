#include <iostream>
#include "book.h"
#include "reader.h"
#include "employee.h"
#include "librarian.h"
#include "person.h"
#include "cleaner.h"
#include "ILibraryUse.h"



using namespace std;
void dailyActivity(Person& p) {
    p.activity();
}
int main() {
    Book book0;
    Book book1;
    Book book2("The Inheritance Games");
    Book book3("Hellp", "Jennifer Lynn Barnes");
    Book book4("The Inheritance Games", "Jennifer Lynn Barnes", 2020);
    Book book5("The Inheritance Games", "Jennifer Lynn Barnes", 2020, 384);
    Book book6=book3;
    const Book book7("The Inheritance Games");


   // cin>>book0;

    cout<<"==========About books==========";
    Book::showBookCount();
    cout<<endl;
    cout<<book0;
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
    Reader reader2("Pavlova Sofiia",book0);
    Reader reader3("Shyshko Ruslana","Nebesnoi Sotni 4v",book1);
    Reader reader4("Rozhman Damir", "Nebesnoi Sotni 2",145,book3);
    Reader reader5("Hlavachuk Bohdan", "Heroes of the Maidan",43,5,book4);
    Reader reader6=Reader("Frayk Oleg", book5);
    Reader reader7;
    reader7=reader6;
    Reader::showReaderCount();
    cout<<endl;

    reader1.aboutreader();
    reader2.aboutreader();
    reader3.aboutreader();
    reader4.aboutreader();
    reader5.aboutreader();
    reader6.aboutreader();
    reader7.aboutreader();

    //cout<<endl;
    //cout<<"\n==========About Emploee============\n";
    Employee employee1;
    Employee employee2("Pavlova Sofiia");
    Employee employee3("Shyshko Ruslana",1000000);
    Employee employee4("Rozhman Damir",16780,30);
    Employee employee5(18900, 18);

    // employee1.about_employee();
    // employee2.about_employee();
    // employee3.about_employee();
    // employee4.about_employee();
    // employee5.about_employee();

    cout<<endl;
    cout<<"\n==========About Librarian============\n";
    Librarian lib1("Ruslana", 250000, 20, 150);
    lib1.about_librarian();

    cout<<endl;
    cout<<"\n==========Laba 5============\n";
    Person* r;
    r = new Reader("Sofiia");
    r->showBase();
    delete r;

    Person* p;
    p=new Librarian("Pavlova Sofiia");
    p->showProfession();
    delete p;

    p = new Reader("Rozhman Damir",book3);
    p->showBook();
    delete p;

    p=new Reader("Hlavachuk Bohdan",book4);
    p->showBook();
    delete p;

    p=new Employee("Pavlova");
    p->showBook();
    delete p;

    cout<<endl;
    Reader a("Alice");
    //Librarian l("Sofiia");
    Cleaner c("Ruslana");
    Employee e("Bogdan");

    dailyActivity(a);
    dailyActivity(c);
    //dailyActivity(l);

    cout<<endl;
    Person &f =e;
    f.showRole();

    p=new Librarian("Pavlova Sofiia");
    p->showRole();
    delete p;


    ILibraryUse * u;
    u = new Reader("Sofiia");
    u->takeBook();
    u->showStatus();
    delete u;


    return 0;
}