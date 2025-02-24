#include <iostream>
#include <vector>
#include <limits>

using namespace std;

class Book {
private:
    string title, author, releaseDate, genre;
    float rating;

public:
    // Constructor with initializer list
    Book(const string& t, const string& a, const string& r, const string& g, float rt)
        : title(t), author(a), releaseDate(r), genre(g), rating(rt) {}

    // Display book details
    void showDetails() const {
        cout << "--- Book Details ---" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Release Date: " << releaseDate << endl;
        cout << "Genre: " << genre << endl;
        cout << "Rating: " << rating << "/5" << endl;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook() {
        string title, author, releaseDate, genre;
        float rating;
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter book title: ";
        getline(cin, title);
        
        cout << "Enter author: ";
        getline(cin, author);
        
        cout << "Enter release date: ";
        getline(cin, releaseDate);
        
        cout << "Enter genre: ";
        getline(cin, genre);
        
        cout << "Enter rating (out of 5): ";
        while (!(cin >> rating) || rating < 0 || rating > 5) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid rating. Enter a number between 0 and 5: ";
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        books.emplace_back(title, author, releaseDate, genre, rating);
        cout << "\nBook added successfully!\n";
    }

    void displayBooks() const {
        if (books.empty()) {
            cout << "No books in the library.\n";
            return;
        }
        cout << "\n--- Book List ---\n";
        for (const auto& book : books) {
            book.showDetails();
            cout << "-------------------\n";
        }
    }
};

int main() {
    Library library;
    int choice;
    
    while (true) {
        cout << "\nMenu\n";
        cout << "1 - Add Book\n";
        cout << "2 - Display Books\n";
        cout << "3 - Exit\n";
        cout << "Choose an option: ";
        
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }
        
        switch (choice) {
            case 1:
                library.addBook();
                break;
            case 2:
                library.displayBooks();
                break;
            case 3:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}
