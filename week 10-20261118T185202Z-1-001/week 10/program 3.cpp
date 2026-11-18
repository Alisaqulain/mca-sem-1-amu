//week 10 program 3
#include <iostream>
#include <string>
using namespace std;

struct Book {
    int book_id;
    string title;
    string author;
    float price;
};

void display(Book b) {
    cout << "\nBook Details\n";
    cout << "Book ID: " << b.book_id << endl;
    cout << "Title: " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "Price: " << b.price << endl;
}

int main() {
    Book b;

    cout << "Enter book ID: ";
    cin >> b.book_id;

    cout << "Enter book title: ";
    getline(cin >> ws, b.title);

    cout << "Enter author name: ";
    getline(cin, b.author);

    cout << "Enter book price: ";
    cin >> b.price;

    display(b);

    return 0;
}
