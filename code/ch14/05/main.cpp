#include <iostream>

using namespace std;

class Book {
    public:
        string bookName, bookStatus;

        Book(string bookName, string bookStatus) {
            this->bookName = bookName;
            this->bookStatus = bookStatus;
        }

        Book(string bookName) {
            this->bookName = bookName;
            this->bookStatus = "available";
        }

        void borrowBook() {
            if (this->bookStatus == "available") {
                cout << "borrow successfully" << endl;
                this->bookStatus = "unavailable";
            }
            else {
                cout << "borrow unsuccessfully" << endl;
            }
        }

        void returnBook() {
            if (this->bookStatus == "unavailable") {
                cout << "return successfully" << endl;
                this->bookStatus = "available";
            }
            else {
                cout << "return unsuccessfully" << endl;
            }
        }
};

int main() {
    Book Book_A = Book("AI Superpowers");
    cout << "Book status : " + Book_A.bookStatus << endl;
    Book_A.borrowBook();
    cout << "Book status : " + Book_A.bookStatus << endl;
    Book_A.returnBook();
    cout << "Book status : " + Book_A.bookStatus << endl;

    return 0;
}