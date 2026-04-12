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


using namespace std;
void addBook(vector<Book>& books) {
    string title, author;
    int year, pages;

    cin.ignore(); // важливо!

    cout << "Enter title: ";
    getline(cin, title);

    cout << "Enter author: ";
    getline(cin, author);

    cout << "Enter year: ";
    cin >> year;

    cout << "Enter pages: ";
    cin >> pages;

    books.push_back(Book(title, author, year, pages));

    cout << "Book added successfully!\n";
}
void showBooks(const vector<Book>& books) {
    if (books.empty()) {
        cout << "No books available\n";
        return;
    }

    for (const auto& b : books) {
        cout << b;
    }
}
void adminMenu(vector<Book>& books) {
    int adminChoice;
    do {
        cout << "\nAdmin Menu:\n";
        cout << "1. Add Book\n";
        cout << "2. View Books\n";
        cout << "0. Logout\n";
        cout << "Enter your choice: ";
        cin >> adminChoice;

        switch (adminChoice) {
            case 1:
                cout << "Add a new book functionality\n";
                addBook(books);
                break;
            case 2:
                cout << "View books functionality\n";
                showBooks(books);
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
    Book book0;
    Book book1;
    Book book2("The Inheritance Games");
    Book book3("Hellp", "Jennifer Lynn Barnes");
    Book book4("The Inheritance Games", "Jennifer Lynn Barnes", 2020);
    Book book5("The Inheritance Games", "Jennifer Lynn Barnes", 2020, 384);
    Book book6=book3;
    const Book book7("The Inheritance Games");

    vector<unique_ptr<Person>> people;
    people.push_back(make_unique<Librarian>("Sofiia","sofavpavlova","sof131313",25000,25,250));
    people.push_back(make_unique<Reader>("Ruslana","ruslana.shysko"));
    people.push_back(make_unique<Reader>("Olena Marko","olenka.marko123","Nebesnoyi Sotni 45a","0452365422",56,book3));
    vector<Book> books;
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
                        adminMenu(books);
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

