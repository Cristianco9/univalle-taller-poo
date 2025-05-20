#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book
{
private:
    string title;
    string author;
    string ISBN;
    int yearRelease;
    bool available;

public:
    Book(string t, string a, string i, int y, bool av = true)
    {
        title = t;
        author = a;
        ISBN = i;
        yearRelease = y;
        available = av;
    }

    bool isAvailable()
    {
        return available;
    }

    void lendBook()
    {
        if (available)
        {
            available = false;
            cout << "\n---------------------------------------------" << endl;
            cout << "\nBook data: " << endl;
            cout << "\nTitle: " << title << endl;
            cout << "\nAuthor: " << author << endl;
            cout << "\nISBN: " << ISBN << endl;
            cout << "\nRelease year: " << yearRelease << endl;
            cout << "\n---------------------------------------------" << endl;
            cout << "\nThe book have been lended successfully" << endl;
            cout << "\n---------------------------------------------" << endl;
        }
        else
        {
            cout << "\n---------------------------------------------" << endl;
            cout << "\nThe book cannot be lended. Because is unavailable" << endl;
            cout << "\n---------------------------------------------" << endl;
        }
    }

    void returnBook()
    {
        if (!available)
        {
            available = true;
            cout << "\n---------------------------------------------" << endl;
            cout << "\nBook data: " << endl;
            cout << "\nTitle: " << title << endl;
            cout << "\nAuthor: " << author << endl;
            cout << "\nISBN: " << ISBN << endl;
            cout << "\nRelease year: " << yearRelease << endl;
            cout << "\n---------------------------------------------" << endl;
            cout << "Book has been returned" << endl;
            cout << "\n---------------------------------------------" << endl;
        }
        else
        {
            cout << "\n---------------------------------------------" << endl;
            cout << "\nThe book cannot be turned backs." << endl;
            cout << "\nBecause not have been lended." << endl;
            cout << "\n---------------------------------------------" << endl;
        }
    }

    void displayBookData()
    {
        cout << "\n---------------------------------------------" << endl;
        cout << "\n-------------------BOOK DATA-----------------" << endl;
        cout << "\n---------------------------------------------" << endl;
        cout << "\nTitle: " << title << endl;
        cout << "\nAuthor: " << author << endl;
        cout << "\nISBN: " << ISBN << endl;
        cout << "\nRelease year: " << yearRelease << endl;
        cout << "\nAvailable: " << (available ? "yes" : "no") << endl;
        cout << "\n---------------------------------------------" << endl;
    }

    string getISBN()
    {
        return ISBN;
    }

    string getAuthorName()
    {
        return author;
    }
};

class Library
{
private:
    vector<Book> library;

public:
    /*
    Library()
    {
    }
    */

    void addBook(Book newBook)
    {
        if (!newBook.isAvailable())
        {
            cout << "\n---------------------------------------------" << endl;
            cout << "\nThe book not have been sended.\nTry again." << endl;
            cout << "\n---------------------------------------------" << endl;
        }
        else
        {
            library.push_back(newBook);
            system("clear");
            cout << "\n---------------------------------------------" << endl;
            cout << "\nThe book have been added successfully." << endl;
            cout << "\n---------------------------------------------" << endl;
        }
    }

    void displayAllBooks()
    {
        if (library.size() < 1)
        {
            cout << "\n---------------------------------------------" << endl;
            cout << "\nNo Books added to the library\n";
            cout << "\n---------------------------------------------" << endl;
            return;
        }

        cout << "\n---------------------------------------------" << endl;
        cout << "\n---------------- BOOKS ADDED ----------------\n";
        for (int i = 0; i < library.size(); i++)
        {
            library[i].displayBookData();
        }
        cout << "\n---------------------------------------------" << endl;
    }

    void searchByISBN()
    {
        string ISBN;
        bool finded = false;
        cout << "\n---------------------------------------------" << endl;
        cout << "\nEnter the ISBN to seach a book: " << endl;
        cin >> ISBN;
        cout << "\n---------------------------------------------" << endl;

        for (int i = 0; i < library.size(); i++)
        {
            if (library[i].getISBN() == ISBN)
            {
                cout << "\n---------------------------------------------" << endl;
                cout << "\n------------------Book finded----------------\n";
                cout << "\n---------------------------------------------" << endl;
                library[i].displayBookData();
                cout << "\n---------------------------------------------" << endl;
                finded = true;
                break;
            }
        }

        if (!finded)
        {
            cout << "\n---------------------------------------------" << endl;
            cout << "\nThe book was not found.\nTry again." << endl;
            cout << "\n---------------------------------------------" << endl;
            return;
        }
    }

    void searchByAuthor()
    {
        string authorName;
        bool finded = false;
        cout << "\n---------------------------------------------" << endl;
        cout << "\nEnter the author name to search a book: " << endl;
        cin.ignore();
        getline(cin, authorName);
        cout << "\n---------------------------------------------" << endl;

        for (int i = 0; i < library.size(); i++)
        {
            if (library[i].getAuthorName() == authorName)
            {
                cout << "\n---------------------------------------------" << endl;
                cout << "\n------------------Book finded----------------\n";
                cout << "\n---------------------------------------------" << endl;
                library[i].displayBookData();
                cout << "\n---------------------------------------------" << endl;
                finded = true;
                break;
            }
        }

        if (!finded)
        {
            cout << "\n---------------------------------------------" << endl;
            cout << "\nThe book was not found.\nTry again." << endl;
            cout << "\n---------------------------------------------" << endl;
            return;
        }
    }

    void deleteByISBN()
    {
        string ISBNCode;
        bool finded = false;
        cout << "\n---------------------------------------------" << endl;
        cout << "\nEnter the ISBN code to seach a book: " << endl;
        cin >> ISBNCode;
        cout << "\n---------------------------------------------" << endl;

        for (int i = 0; i < library.size(); i++)
        {
            if (library[i].getISBN() == ISBNCode)
            {
                cout << "\n---------------------------------------------" << endl;
                cout << "\n------------------Book deleted---------------\n";
                cout << "\n------------------successfully---------------\n";
                cout << "\n---------------------------------------------" << endl;
                library[i].displayBookData();
                cout << "\n---------------------------------------------" << endl;
                library.erase(library.begin() + i);
                finded = true;
                break;
            }
        }

        if (!finded)
        {
            cout << "\n---------------------------------------------" << endl;
            cout << "\nThe book was not found.\nTry again." << endl;
            cout << "\n---------------------------------------------" << endl;
            return;
        }
    }

    void lendByISBN()
    {
        string ISBNCode;
        bool finded = false;
        cout << "\n---------------------------------------------" << endl;
        cout << "\nEnter the ISBN code to seach a book: " << endl;
        cin >> ISBNCode;
        cout << "\n---------------------------------------------" << endl;

        for (int i = 0; i < library.size(); i++)
        {
            if (library[i].getISBN() == ISBNCode)
            {
                library[i].lendBook();
                finded = true;
                break;
            }
        }

        if (!finded)
        {
            cout << "\n---------------------------------------------" << endl;
            cout << "\nThe book was not found.\nTry again." << endl;
            cout << "\n---------------------------------------------" << endl;
            return;
        }
    }

    void returnByISBN()
    {
        string ISBNCode;
        bool finded = false;
        cout << "\n---------------------------------------------" << endl;
        cout << "\nEnter the ISBN code to seach a book: " << endl;
        cin >> ISBNCode;
        cout << "\n---------------------------------------------" << endl;

        for (int i = 0; i < library.size(); i++)
        {
            if (library[i].getISBN() == ISBNCode)
            {
                library[i].returnBook();
                finded = true;
                break;
            }
        }

        if (!finded)
        {
            cout << "\n---------------------------------------------" << endl;
            cout << "\nThe book was not found.\nTry again." << endl;
            cout << "\n---------------------------------------------" << endl;
            return;
        }
    }
};

int main()
{
    Library booksInventory;
    int op = 0;
    int minBooks = 5;
    int bookQuantity = 0;
    do
    {
        cout << "\n--------- MENU -------- \n";
        cout << "1. Add minimum 5 books\n";
        cout << "2. Display all books\n";
        cout << "3. Search a book by ISBN\n";
        cout << "4. Search a book by author\n";
        cout << "5. Delete a book by ISBN\n";
        cout << "6. Lend a book by ISBN\n";
        cout << "7. Return a book by ISBN\n";
        cout << "8. Exit\n";
        cout << "\nEnter an option: ";
        cin >> op;

        switch (op)
        {
        case 1:
            cout << "\n---------------------------------------------" << endl;
            cout << "\nHow many books want add: " << endl;
            cin >> bookQuantity;
            cout << "\n---------------------------------------------" << endl;

            do
            {
                system("clear");
                cout << "\n---------------------------------------------" << endl;
                cout << "\nWrong choice. minimum add 5 books: " << endl;
                cout << "\n---------------------------------------------" << endl;
                cout << "\n---------------------------------------------" << endl;
                cout << "\nHow many books want add: " << endl;
                cin >> bookQuantity;
                cout << "\n---------------------------------------------" << endl;
            } while (bookQuantity < minBooks);
            for (int i = 0; i < bookQuantity; i++)
            {
                string newBookTitle;
                string newBookAuthor;
                int newBookYear;
                string newBookISBN;
                system("clear");
                cout << "\n---------------------------------------------" << endl;
                cout << "\nEnter the book title: ";
                cin.ignore();
                getline(cin, newBookTitle);
                cout << "\nEnter the book author: ";
                getline(cin, newBookAuthor);
                cout << "\nEnter the book release year: ";
                cin >> newBookYear;
                cout << "\nEnter the book ISBN: ";
                cin >> newBookISBN;
                cout << "\n---------------------------------------------" << endl;
                Book newBook(newBookTitle, newBookAuthor, newBookISBN, newBookYear);
                booksInventory.addBook(newBook);
            }
            system("clear");
            cout << "\n---------------------------------------------" << endl;
            cout << "\nAll: " << bookQuantity << " have been added." << endl;
            cout << "\n---------------------------------------------" << endl;
            break;
        case 2:
            system("clear");
            booksInventory.displayAllBooks();
            break;
        case 3:
            system("clear");
            booksInventory.searchByISBN();
            break;
        case 4:
            system("clear");
            booksInventory.searchByAuthor();
            break;
        case 5:
            system("clear");
            booksInventory.deleteByISBN();
            break;
        case 6:
            system("clear");
            booksInventory.lendByISBN();
            break;
        case 7:
            system("clear");
            booksInventory.returnByISBN();
            break;
        case 8:
            system("clear");
            cout << "\n---------------------------------------------" << endl;
            cout << "\nExit........." << endl;
            cout << "\n---------------------------------------------" << endl;
            break;
        default:
            cout << "\n---------------------------------------------" << endl;
            cout << "\nWrong option.\nTry again....";
            cout << "\n---------------------------------------------" << endl;
        }
    } while (op != 8);
    return 0;
}