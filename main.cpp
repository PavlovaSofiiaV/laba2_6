#include <iostream>
#include "book.h"
#include "reader.h"
#include "employee.h"
#include "librarian.h"
#include "person.h"
#include "cleaner.h"
#include "ILibraryUse.h"
#include <vector>
#include <memory>
#include <fstream>
#include <iomanip>

using namespace std;
void addReader(vector<unique_ptr<Person>>& people) {
    string name, login, adress, number;
    int book;
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter login: ";
    getline(cin, login);
    cout << "Enter adress: ";
    getline(cin, adress);
    cout << "Enter number: ";
    getline(cin, number);
    cout << "Enter amount of books : ";
    cin >> book;

    auto r = make_unique<Reader>(name, login, adress, number, book);
    ofstream file("readers.txt", ios::app);
    r->save(file);
    people.push_back(move(r));
    cout << "Reader added!\n";
}
vector<unique_ptr<Person>> loadReaders() {
    vector<unique_ptr<Person>> people;
    ifstream file("readers.txt");

    string name, login, adress, number;
    int book;

    while (getline(file, name, '|')) {
        getline(file, login, '|');
        getline(file, adress, '|');
        getline(file, number, '|');
        file >> book;
        file.ignore(1);

        people.push_back(make_unique<Reader>(name, login, adress, number, book));
    }

    return people;
}
void addBook(vector<Book>& books) {
    string title, author;
    int year, pages;
    cin.ignore();
    cout << "Enter title: ";
    getline(cin, title);
    cout << "Enter author: ";
    getline(cin, author);
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter pages: ";
    cin >> pages;
    Book b(title, author, year, pages);
    books.push_back(b);
    ofstream file("books.txt", ios::app);
    b.save(file);
}
vector<Book> loadBooksFromFile() {
    vector<Book> books;
    ifstream file("books.txt");

    string title, author;
    int year, pages;

    while (getline(file, title, '|')) {
        getline(file, author, '|');
        file >> year;
        file.ignore();
        file >> pages;
        file.ignore();

        books.push_back(Book(title, author, year, pages));
    }

    file.close();
    return books;
}
void clearBooksFile(vector<Book>& books) {
    ofstream file("books.txt", ios::trunc);
    file.close();
    books.clear();
    cout << "File cleared successfully!\n";
}

void adminMenu(vector<Book>& books,vector<unique_ptr<Person>>& people) {
    int adminChoice;
    do {
        cout << "\nAdmin Menu:\n";
        cout << "1. Add Book\n";
        cout << "2. Delete book\n";
        cout << "3. Add reader \n";
        cout << "0. Logout\n";
        cout << "Enter your choice: ";
        cin >> adminChoice;

        switch (adminChoice) {
            case 1:
                addBook(books);
                break;
            case 2:
                clearBooksFile(books);
                break;
            case 3:
                addReader(people);
                break;
            case 0:
                cout << "Logging out...\n";
                break;
            default:
                cout << "Invalid choice, try again.\n";
        }

    } while (adminChoice != 0);
}

int main() {
    vector<unique_ptr<Person>> people = loadReaders();
    people.push_back(make_unique<Librarian>("Sofiia","sofa","13",25000,25,250));
    people.push_back(make_unique<Reader>("Ruslana","ruslana.shysko"));
    people.push_back(make_unique<Reader>("Olena Marko","olenka.marko123","Nebesnoyi Sotni 45a","0452365422",56));

    vector<Book> books = loadBooksFromFile();
    int choice;
    while (true) {
        cout << "\n1. Admin\n";
        cout << "2. User\n";
        cout << "0. Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:{
                string l, p;
                bool found = false;
                cout << "Login: ";
                cin >> l;
                cout << "Password: ";
                cin >> p;
                for (auto &person : people) {
                    if (person->getRol()=="admin" && person->checkIn(l, p)) {
                        cout << "ACCESS GRANTED\n";
                        person->showRole();
                        person->showInfo();
                        adminMenu(books,people);
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "\nWrong login or password\n";
                }
            }
                break;
            case 2:{
                string log,par;
                cout << "Login: ";
                cin >> log;
                bool found2 = false;
                for (auto &person : people) {
                    if (person->getRol()=="user" &&person->checkIn(log,par)) {
                        cout << "\nACCESS GRANTED\n";
                        person->showRole();
                        person->showInfo();
                        found2 = true;
                        break;
                    }
                }
                if (!found2) {
                    cout << "\nWrong login\n";
                }
                break;
            }
            case 0: {
                cout << "Exiting program...\n";
                break;
            }
            default: {
                cout << "Invalid choice, please try again.\n";
                break;
            }
        }
    }
}

