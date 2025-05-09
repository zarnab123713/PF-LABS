#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>  // For SetConsoleTextAttribute() (Color)
#include <limits>     // For input validation

using namespace std;

// Function to set text color in the console
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Function to clear the console screen
void cls() {
    system("cls");
}

// Book structure
struct Book {
    string title;
    string author;
    int year;
    bool isAvailable;
    int id;
};

// Hardcoded books for demonstration
Book books[] = {
    { "Diwan-e-Ghalib", "Ghalib", 1863, true, 101 },
    { "Kulliyat-e-Iqbal", "Allama Iqbal", 1935, true, 102 },
    { "Urdu Adab Ki Tareekh", "Jameel Jalibi", 1980, true, 103 },
    { "Raja Gidh", "Bano Qudsia", 1981, true, 104 },
    { "Aangan", "Khadija Mastoor", 1962, true, 105 }
};

const int totalBooks = sizeof(books) / sizeof(books[0]);

// Function to display books
void displayBooks() {
    cls();
    setColor(11);
    cout << "\n         ================= BOOK LIST =================\n\n\n";
    setColor(14);
    cout << left << setw(5) << "ID" << setw(25) << "Title" << setw(20) << "Author" << setw(10) << "Year" << setw(12) << "Availability\n\n";
    cout << "---------------------------------------------------------------\n";
    
    for (int i = 0; i < totalBooks; i++) {
        cout << left << setw(5) << books[i].id
             << setw(25) << books[i].title
             << setw(20) << books[i].author
             << setw(10) << books[i].year
             << setw(12) << (books[i].isAvailable ? "Available" : "Issued") << "\n";
    }
    cout << "---------------------------------------------------------------\n";

    system("pause");  // Pause to prevent instant jump
}

// Function to search for a book
void searchBook() {
    cls();
    setColor(11);
    cout << "\n========== SEARCH BOOK ==========\n";
    
    string searchTitle;
    setColor(14);
    cout << "Enter book title to search: ";
    cin.ignore();
    getline(cin, searchTitle);

    bool found = false;
    for (int i = 0; i < totalBooks; i++) {
        if (books[i].title == searchTitle) {
            setColor(10);
            cout << "\nBook Found!\n";
            setColor(14);
            cout << "--------------------------------------\n";
            cout << "Title: " << books[i].title << "\nAuthor: " << books[i].author
                 << "\nYear: " << books[i].year << "\nAvailability: " 
                 << (books[i].isAvailable ? "Available" : "Issued") << "\n";
            cout << "--------------------------------------\n";
            found = true;
            break;
        }
    }

    if (!found) {
        setColor(12);
        cout << "\nBook not found!\n";
    }

    system("pause");
}

// Function to borrow or issue a book
void borrowOrIssueBook() {
    cls();
    setColor(11);
    cout << "\n========== BORROW / ISSUE BOOK ==========\n";

    int bookId;
    setColor(14);
    cout << "Enter the Book ID you want to borrow/issue: ";
    cin >> bookId;

    bool found = false;
    for (int i = 0; i < totalBooks; i++) {
        if (books[i].id == bookId) {
            found = true;
            if (!books[i].isAvailable) {
                setColor(12);
                cout << "\nSorry, this book is already issued.\n";
                system("pause");
                return;
            }

            int choice;
            setColor(14);
            cout << "\n1. Borrow for Free (7-day limit)";
            cout << "\n2. Issue with Fixed Price ($5)";
            cout << "\nEnter choice: ";
            cin >> choice;

            if (choice == 1) {
                books[i].isAvailable = false;
                setColor(10);
                cout << "\nYou have borrowed the book. Please return within 7 days.\n";
            } 
            else if (choice == 2) {
                books[i].isAvailable = false;
                setColor(10);
                cout << "\nBook issued successfully. Charge: $5\n";
            } 
            else {
                setColor(12);
                cout << "\nInvalid choice.\n";
            }

            system("pause");
            return;
        }
    }

    if (!found) {
        setColor(12);
        cout << "\nInvalid Book ID!\n";
    }

    system("pause");
}

// Function to return a book and calculate fine
void returnBook() {
    cls();
    setColor(11);
    cout << "\n========== RETURN BOOK ==========\n";

    int bookId, daysLate;
    setColor(14);
    cout << "Enter the Book ID to return: ";
    cin >> bookId;

    bool found = false;
    for (int i = 0; i < totalBooks; i++) {
        if (books[i].id == bookId) {
            found = true;
            if (books[i].isAvailable) {
                setColor(12);
                cout << "\nThis book is not borrowed.\n";
                system("pause");
                return;
            }

            cout << "How many days late (if any)? ";
            cin >> daysLate;

            books[i].isAvailable = true;

            if (daysLate > 0) {
                int fine = daysLate * 2; // $2 per late day
                setColor(12);
                cout << "\nBook returned late! Fine: $" << fine << "\n";
            } 
            else {
                setColor(10);
                cout << "\nBook returned successfully. No fine.\n";
            }

            system("pause");
            return;
        }
    }

    if (!found) {
        setColor(12);
        cout << "\nInvalid Book ID!\n";
    }

    system("pause");
}

// Main Menu
void mainMenu() {
    int choice;
    do {
        cls();
        setColor(13);
        cout << "\n============================================================\n";
        cout << "             LIBRARY MANAGEMENT SYSTEM       \n";
        cout << "=============================================================\n";
        setColor(14);
       	cout<<"\n\n\tDeveloper : Zarnab Fatima";
	    cout<<"\n\n\tEnjoy Programming with Zarnab Fatima";
        cout<<"\n==============================================================\n";
        setColor(10);cout<<"\n       ***** MAIN MENU *****     "  <<endl;
        setColor(11);
        cout << "1. View Books\n";
        cout << "2. Search Book\n";
        cout << "3. Borrow/Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        setColor(14);
        cout << "===============================================================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        cls();  // Clear screen for better readability

        switch (choice) {
            case 1: displayBooks(); break;
            case 2: searchBook(); break;
            case 3: borrowOrIssueBook(); break;
            case 4: returnBook(); break;
            case 5: setColor(10); cout << "\nExiting Program... Goodbye!\n"; break;
            default: setColor(12); cout << "\nInvalid choice! Try again.\n"; system("pause");
        }
    } while (choice != 5);
}

// Main function
int main() {
    mainMenu();
    return 0;
}




