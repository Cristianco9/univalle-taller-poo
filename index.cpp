#include<iostream>
#include<vector>
#include<string>
#include <fstream>
#include <sstream>


struct Book {
    std::string title;
    std::string author;
    std::string category;
    bool available;
    int id;
    int userID;
};

void addBook(std::vector<Book>& library){
    Book newBook;
    std::cout<<"Enter the book title: ";
    std::cin>>newBook.title;
    std::cout<<"enter the author: ";
    std::cin>>newBook.author;
    std::cout<<"Enter a category: ";
    std::cin>>newBook.category;
    std::cout<<"Enter the ID: ";
    std::cin>>newBook.id;
    newBook.available = true;
    library.push_back(newBook);
    std::cout << "\n*****************************************";
    std::cout<<"\nNew book added successfully.\n";
    std::cout << "\n*****************************************";
}

void showLibrary(const std::vector<Book>& library){
    if(library.empty()){
        std::cout << "\n*****************************************";
        std::cout<<"\nThe library is empty.";
        std::cout << "\n*****************************************";
        return;
    }
    
    bool availableBooksFound = false;
    std::cout << "\n*****************************************";
    std::cout << "\nAvailable Books in Library:";
    std::cout << "\n*****************************************";
    
    for(const auto& book : library){
        if(book.available) {
            availableBooksFound = true;
            std::cout << "\n*****************************************"
            << "\nTitle: " << book.title
            << "\nAuthor: " << book.author 
            << "\nCategory: " << book.category
            << "\nID: " << book.id
            << "\n*****************************************";
        }
    }
    
    if(!availableBooksFound) {
        std::cout << "\n*****************************************";
        std::cout << "\nThere are no available books in the library.";
        std::cout << "\n*****************************************";
    }
}

void searchBook(const std::vector<Book>& library){
    std::string title, author;
    int option = 0;
    std::cout << "\n*****************************************";
    std::cout<<"\noptions menu: ";
    std::cout<<"\n1. Search by titile: ";
    std::cout<<"\n2. Search by author: ";
    std::cout << "\n*****************************************";
    std::cin>>option;

    switch (option)
    {
    case 1:
        std::cout << "\n*****************************************";
        std::cout<<"\nEnter the book title: ";
        std::cin>>title;
        std::cout << "\n*****************************************";
        for( const auto& book : library ){
            if(book.title == title && book.available){
                std::cout << "\n*****************************************";
                std::cout<<"\nBook founded: ";
                std::cout << "\n*****************************************"
                <<"\nTitle: " << book.title
                << "\nAuthor: " << book.author 
                << "\nCategory: " << book.category
                << "\nID: " << book.id
                << "\nStatus: Available"
                << "\n*****************************************";
                return;
            } else if (book.title == title ) {
                std::cout << "\n*****************************************";
                std::cout<<"\nBook is not available.\nhas been borrowed.: ";
                std::cout << "\n*****************************************";
            }
        }
        std::cout << "\n*****************************************";
        std::cout<<"\nBook not founded.\n";
        std::cout << "\n*****************************************";
        break;
    case 2:
        std::cout<<"\nEnter the book author: ";
        std::cin>>author;
        for( const auto& book : library ){
            if(book.author == author && book.available){
                std::cout << "\n*****************************************";
                std::cout<<"\nBook founded: ";
                std::cout << "\n*****************************************"
                <<"\nTitle: " << book.title
                << "\nAuthor: " << book.author 
                << "\nCategory: " << book.category
                << "\nID: " << book.id
                << "\nStatus: Available"
                << "\n*****************************************";
                return;
            } else if (book.author == author ) {
                std::cout << "\n*****************************************";
                std::cout<<"\nBook is not available.\nhas been borrowed.: ";
                std::cout << "\n*****************************************";
            }
        }
        std::cout << "\n*****************************************";
        std::cout<<"\nBook not founded.\n";
        std::cout << "\n*****************************************";
        break; 
    default:
        std::cout << "\n*****************************************";
        std::cout<<"\nWrong option....\nTry again...\nExit...";
        std::cout << "\n*****************************************";
        break;
    }
}

void borrowBook (std::vector<Book>& library) {
    int id = 0, user=0;
    std::cout << "\n*****************************************";
    std::cout<<"\nEnter the book ID to borrow: "; 
    std::cin>>id;
    std::cout << "\n*****************************************";
    for(auto& book : library ){
        if(book.id == id && book.available){
            std::cout << "\n*****************************************";
            std::cout<<"\nEnter your ID ";
            std::cin>>user;
            std::cout << "\n*****************************************";
            if (user > 0) {
                book.available = false;
                book.userID = user;
                std::cout << "\n*****************************************";
                std::cout<<"\nBook founded: ";
                std::cout << "\n*****************************************" 
                <<"\nTitle: " << book.title
                << "\nAuthor: " << book.author 
                << "\nCategory: " << book.category
                << "\nID: " << book.id
                << "\nStatus: Borrowed"
                << "\nUser borrowed: " << book.userID
                << "\n*****************************************";
                return;
            }
        } 
    }
    std::cout << "\n*****************************************";
    std::cout << "\nBook not found.\n";
    std::cout << "\n*****************************************"; 
}

void returnBook(std::vector<Book>& library) {
    int id = 0, user = 0;
    std::cout << "\n*****************************************";
    std::cout << "\nEnter the book ID to return: "; 
    std::cin >> id;
    std::cout << "\n*****************************************";
    std::cout << "\nEnter the user ID: "; 
    std::cin >> user;
    std::cout << "\n*****************************************";
    
    bool bookFound = false;
    
    for(auto& book : library) {
        if(book.id == id) {
            bookFound = true;
            
            if(!book.available && book.userID == user) {
                book.available = true;
                book.userID = 0;
                std::cout << "\n*****************************************";
                std::cout << "\nBook returned successfully: ";
                std::cout << "\n*****************************************" 
                << "\nTitle: " << book.title
                << "\nAuthor: " << book.author 
                << "\nCategory: " << book.category
                << "\nID: " << book.id
                << "\nStatus: Available"
                << "\n*****************************************";
                return;
            } else if(!book.available && book.userID != user) {
                std::cout << "\n*****************************************";
                std::cout << "\nWrong user. You cannot return this book.";
                std::cout << "\n*****************************************";
                return;
            } else if(book.available) {
                std::cout << "\n*****************************************";
                std::cout << "\nThis book is already available in the library.";
                std::cout << "\n*****************************************";
                return;
            }
        }
    }
    
    if(!bookFound) {
        std::cout << "\n*****************************************";
        std::cout << "\nBook not found.\n";
        std::cout << "\n*****************************************";
    }
}

void saveLibraryToCSV(const std::vector<Book>& library) {
    std::ofstream outFile("data.csv");
    
    if (!outFile.is_open()) {
        std::cout << "\n*****************************************";
        std::cout << "\nError: Could not open file for writing.";
        std::cout << "\n*****************************************";
        return;
    }
    
    outFile << "id, title, author, category, available, userID\n";
    

    for (const auto& book : library) {
        outFile << book.id << ","
                << book.title << ","
                << book.author << ","
                << book.category << ","
                << (book.available ? "1" : "0") << ","
                << book.userID << "\n";
    }
    
    outFile.close();
    std::cout << "\n*****************************************";
    std::cout << "\nLibrary data saved to data.csv successfully!";
    std::cout << "\n*****************************************";
}

void loadLibraryFromCSV(std::vector<Book>& library) {
    std::ifstream inFile("data.csv");
    
    if (!inFile.is_open()) {
        std::cout << "\n*****************************************";
        std::cout << "\nError: Could not open data.csv file for reading.";
        std::cout << "\n*****************************************";
        return;
    }
    
    library.clear();
    
    std::string line;

    std::getline(inFile, line);
    
    while (std::getline(inFile, line)) {

        std::stringstream ss(line);
        std::string field;
        Book book;
        
        std::getline(ss, field, ',');
        book.id = std::stoi(field);
        
        std::getline(ss, book.title, ',');
        
        std::getline(ss, book.author, ',');
        
        std::getline(ss, book.category, ',');
        
        std::getline(ss, field, ',');
        book.available = (field == "1");
        
        std::getline(ss, field, ',');
        book.userID = std::stoi(field);
        
        library.push_back(book);
    }
    
    inFile.close();
    std::cout << "\n*****************************************";
    std::cout << "\nLibrary data loaded from data.csv successfully!";
    std::cout << "\nLoaded " << library.size() << " books.";
    std::cout << "\n*****************************************";
}

int main(){
    std::vector<Book> library;
    int option;
    do{
        std::cout << "\n*****************************************";
        std::cout << "\n***************MAIN MEN******************\n";
        std::cout<<"1. Add a new book\n";
        std::cout<<"2. Find a book by title or author\n";
        std::cout<<"3. Display all books\n";
        std::cout<<"4. Borrow a book\n";
        std::cout<<"5. Return a book\n";
        std::cout<<"6. Load or download the library\n";
        std::cout<<"7. Exit\n";
        std::cin>>option;
        switch (option)
        {
            case 1:
                addBook(library);
                break;
            case 2:
                searchBook(library);
                break;
            case 3:
                showLibrary(library);
                break;
            case 4:
                borrowBook(library);
                break;
            case 5:
                returnBook(library);
                break;
            case 6:
                int fileOption;
                std::cout << "\n*****************************************";
                std::cout << "\nFile Operations:";
                std::cout << "\n1. Save library to file";
                std::cout << "\n2. Load library from file";
                std::cout << "\n*****************************************";
                std::cin >> fileOption;
                
                if (fileOption == 1) {
                    saveLibraryToCSV(library);
                } else if (fileOption == 2) {
                    loadLibraryFromCSV(library);
                } else {
                    std::cout << "\n*****************************************";
                    std::cout << "\nInvalid option.";
                    std::cout << "\n*****************************************";
                }
                break;
            case 7:
                std::cout << "\n*****************************************";
                std::cout << "\nProgram finished. Good Bye!\n";
                std::cout << "\n*****************************************";
                break;
            default:
                std::cout << "\n*****************************************";
                std::cout<<"Wrong option....\nTry again...\nExit...";
                std::cout << "\n*****************************************";
        }
    }while(option != 7);
}