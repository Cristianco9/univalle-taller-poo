#include <iostream>
#include <string>

using namespace std;

struct Book
{
    string title;
    string author;
    int year;
    string ISBN;
};

void addBook(Book library[], int &totalBook)
{
    if (totalBook >= 5)
    {
        cout << "\nLibrary full. Cannot add more books\n";
        system("clear");
        return;
    }
    cout << "\n---------------------------------------------" << endl;
    cout << "\nEnter the book title: ";
    cin.ignore();
    getline(cin, library[totalBook].title);
    cout << "\nEnter the book author: ";
    getline(cin, library[totalBook].author);
    cout << "\nEnter the book release year: ";
    cin >> library[totalBook].year;
    cout << "\nEnter the book ISBN: ";
    cin >> library[totalBook].ISBN;

    totalBook++;
    cout << "\nBook added successfully" << endl;
    cout << "\n---------------------------------------------" << endl;
}

void displayBook(const Book library[], int totalBook)
{
    if (totalBook == 0)
    {
        cout << "\n---------------------------------------------" << endl;
        cout << "\nNo Books added to the library\n";
        cout << "\n---------------------------------------------" << endl;
        return;
    }
    cout << "\n---------------------------------------------" << endl;
    cout << "\n---------------- BOOKS ADDED ----------------\n";
    for (int i = 0; i < totalBook; i++)
    {
        cout << "\n---------------------------------------------" << endl;
        cout << "\nTitle: " << library[i].title << endl;
        cout << "\nAuthor: " << library[i].author << endl;
        cout << "\nYear: " << library[i].year << endl;
        cout << "\nISBN: " << library[i].ISBN << endl;
        cout << "\n---------------------------------------------" << endl;
    }
}

void searchByISBN(const Book library[], int totalBook)
{
    string ISBN;
    bool finded = false;
    cout << "\n---------------------------------------------" << endl;
    cout << "\nEnter the ISBN to seach a book: " << endl;
    cin >> ISBN;
    cout << "\n---------------------------------------------" << endl;

    for (int i = 0; i < totalBook; i++)
    {
        if (library[i].ISBN == ISBN)
        {
            cout << "\n---------------------------------------------" << endl;
            cout << "\n------------------Book finded----------------\n";
            cout << "\n---------------------------------------------" << endl;
            cout << "\nTitle: " << library[i].title << endl;
            cout << "\nAuthor: " << library[i].author << endl;
            cout << "\nYear: " << library[i].year << endl;
            cout << "\nISBN: " << library[i].ISBN << endl;
            cout << "\n---------------------------------------------" << endl;
            finded = true;
            break;
        }
    }

    if (!finded)
    {
        cout << "\n---------------------------------------------" << endl;
        cout << "\nThe book not have been finded.\nTry again." << endl;
        cout << "\n---------------------------------------------" << endl;
        return;
    }
}

void searchByAuthor(const Book library[], int totalBook)
{
    string authorName;
    bool finded = false;
    cout << "\n---------------------------------------------" << endl;
    cout << "\nEnter the author name to search a book: " << endl;
    cin.ignore();
    getline(cin, authorName);
    cout << "\n---------------------------------------------" << endl;

    for (int i = 0; i < totalBook; i++)
    {
        if (library[i].author == authorName)
        {
            cout << "\n---------------------------------------------" << endl;
            cout << "\n------------------Book finded----------------\n";
            cout << "\n---------------------------------------------" << endl;
            cout << "\nTitle: " << library[i].title << endl;
            cout << "\nAuthor: " << library[i].author << endl;
            cout << "\nYear: " << library[i].year << endl;
            cout << "\nISBN: " << library[i].ISBN << endl;
            cout << "\n---------------------------------------------" << endl;
            finded = true;
            break;
        }
    }

    if (!finded)
    {
        cout << "\n---------------------------------------------" << endl;
        cout << "\nThe book not have been finded.\nTry again." << endl;
        cout << "\n---------------------------------------------" << endl;
        return;
    }
}

void deleteByISBN(Book library[], int &totalBook)
{
    string ISBN;
    bool finded = false;
    cout << "\n---------------------------------------------" << endl;
    cout << "\nEnter the ISBN to seach a book: " << endl;
    cin >> ISBN;
    cout << "\n---------------------------------------------" << endl;

    for (int i = 0; i < totalBook; i++)
    {
        if (library[i].ISBN == ISBN)
        {
            cout << "\n---------------------------------------------" << endl;
            cout << "\n------------------Book deleted---------------\n";
            cout << "\n------------------successfully---------------\n";
            cout << "\n---------------------------------------------" << endl;
            cout << "\nTitle: " << library[i].title << endl;
            cout << "\nAuthor: " << library[i].author << endl;
            cout << "\nYear: " << library[i].year << endl;
            cout << "\nISBN: " << library[i].ISBN << endl;
            cout << "\n---------------------------------------------" << endl;
            for (int j = i; j < totalBook - 1; j++)
            {
                library[j] = library[j + 1];
            }
            totalBook--;
            finded = true;
            break;
        }
    }

    if (!finded)
    {
        cout << "\n---------------------------------------------" << endl;
        cout << "\nThe book not have been finded.\nTry again." << endl;
        cout << "\n---------------------------------------------" << endl;
        return;
    }
}

int main()
{
    Book library[5];
    int totalBook = 0;
    int op;

    do
    {
        cout << "\n--------- MENU -------- \n";
        cout << "1. Add book\n";
        cout << "2. Display all books\n";
        cout << "3. Search a book by ISBN\n";
        cout << "4. Search a book by author\n";
        cout << "5. Delete a book by ISBN\n";
        cout << "6. Exit\n";
        cout << "\nEnter an option: ";
        cin >> op;

        switch (op)
        {
        case 1:
            system("clear");
            addBook(library, totalBook);
            break;
        case 2:
            system("clear");
            displayBook(library, totalBook);
            break;
        case 3:
            system("clear");
            searchByISBN(library, totalBook);
            break;
        case 4:
            system("clear");
            searchByAuthor(library, totalBook);
            break;
        case 5:
            system("clear");
            deleteByISBN(library, totalBook);
            break;
        case 6:
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
    } while (op != 6);
    return 0;
}