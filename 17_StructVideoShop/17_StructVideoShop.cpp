#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
struct Book
{
    char title[100];
    char author[100];
    char publisher[100];
    char genre[50];
    int year;
    float price;
};
void ShowOneBook(const Book& book)
{
    cout << "Title     : " << book.title << endl;
    cout << "Author    : " << book.author << endl;
    cout << "Publisher : " << book.publisher << endl;
    cout << "Genre     : " << book.genre << endl;
    cout << "Year      : " << book.year << endl;
    cout << "Price     : $" << book.price << endl;
}
void Show(const Book* books, int size)
{
    if (size == 0)
    {
        cout << "Library is empty!" << endl;
        return;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "[" << i + 1 << "]" << endl;
        ShowOneBook(books[i]);
        cout << "-----------------------------------" << endl;
    }
}
void AddBook(Book*& books, int& size)
{
    Book* temp = new Book[size + 1];

    // Copy existing data
    for (int i = 0; i < size; i++)
    {
        temp[i] = books[i];
    }
    cout << "Enter New Book Info" << endl;
    cout << "Enter title: ";
    cin.getline(temp[size].title, 100);
    cout << "Enter author: ";
    cin.getline(temp[size].author, 100);
    cout << "Enter publisher: ";
    cin.getline(temp[size].publisher, 100);
    cout << "Enter genre: ";
    cin.getline(temp[size].genre, 50);
    cout << "Enter year: ";
    cin >> temp[size].year;
    cout << "Enter price: ";
    cin >> temp[size].price;
    cin.ignore();
    delete[] books;
    books = temp;
    size++;
    cout << "\nBook successfully added!" << endl;
}
void DeleteBook(Book*& books, int& size, int index)
{
    if (index < 0 || index >= size)
    {
        cout << "Invalid index!" << endl;
        return;
    }
    Book* temp = new Book[size - 1];

    for (int i = 0, j = 0; i < size; i++)
    {
        if (i != index)
        {
            temp[j++] = books[i];
        }
    }
    delete[] books;
    books = temp;
    size--;
    cout << "Book successfully deleted!" << endl;
}
void ChangeData(Book* books, int size, int index)
{
    if (index < 0 || index >= size)
    {
        cout << "Invalid index!" << endl;
        return;
    }
    cout << "Current Book Info" << endl;
    ShowOneBook(books[index]);
    cout << "\nEnter New Details" << endl;
    cout << "Enter title: ";
    cin.getline(books[index].title, 100);
    cout << "Enter author: ";
    cin.getline(books[index].author, 100);
    cout << "Enter publisher: ";
    cin.getline(books[index].publisher, 100);
    cout << "Enter genre: ";
    cin.getline(books[index].genre, 50);
    cout << "Enter year: ";
    cin >> books[index].year;
    cout << "Enter price: ";
    cin >> books[index].price;
    cin.ignore();
    cout << "\nBook information updated successfully!" << endl;
}
void ChangePrice(Book* books, int size, int index)
{
    if (index < 0 || index >= size)
    {
        cout << "Invalid index!" << endl;
        return;
    }
    cout << "Current price of \"" << books[index].title << "\": $" << books[index].price << endl;
    cout << "Enter new price: ";
    cin >> books[index].price;
    cin.ignore();
    cout << "Price updated successfully!" << endl;
}
void SearchByAuthor(const Book* books, int size, const char author[])
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].author, author) == 0)
        {
            ShowOneBook(books[i]);
            cout << "-----------------------------------" << endl;
            found = true;
        }
    }
    if (!found) cout << "No books found by author: " << author << endl;
}
void SearchByTitle(const Book* books, int size, const char title[])
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].title, title) == 0)
        {
            ShowOneBook(books[i]);
            cout << "-----------------------------------" << endl;
            found = true;
        }
    }
    if (!found) cout << "No books found with title: " << title << endl;
}
void SearchByPublisher(const Book* books, int size, const char publisher[])
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].publisher, publisher) == 0)
        {
            ShowOneBook(books[i]);
            cout << "-----------------------------------" << endl;
            found = true;
        }
    }
    if (!found) cout << "No books found by publisher: " << publisher << endl;
}
void SearchByGenre(const Book* books, int size, const char genre[])
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].genre, genre) == 0)
        {
            ShowOneBook(books[i]);
            cout << "-----------------------------------" << endl;
            found = true;
        }
    }
    if (!found) cout << "No books found in genre: " << genre << endl;
}
int main()
{
    int size = 10;
    Book* books = new Book[size]{
        {"1984", "George Orwell", "Secker & Warburg", "Dystopian", 1949, 15.99f},
        {"To Kill a Mockingbird", "Harper Lee", "J. B. Lippincott & Co.", "Fiction", 1960, 12.50f},
        {"The Great Gatsby", "F. Scott Fitzgerald", "Charles Scribner's Sons", "Classic", 1925, 10.99f},
        {"Brave New World", "Aldous Huxley", "Chatto & Windus", "Dystopian", 1932, 14.20f},
        {"The Catcher in the Rye", "J. D. Salinger", "Little, Brown and Company", "Fiction", 1951, 11.80f},
        {"The Hobbit", "J. R. R. Tolkien", "Allen & Unwin", "Fantasy", 1937, 18.50f},
        {"Fahrenheit 451", "Ray Bradbury", "Ballantine Books", "Dystopian", 1953, 13.00f},
        {"Animal Farm", "George Orwell", "Secker & Warburg", "Satire", 1945, 9.99f},
        {"Dune", "Frank Herbert", "Chilton Books", "Sci-Fi", 1965, 20.00f},
        {"The Fellowship of the Ring", "J. R. R. Tolkien", "Allen & Unwin", "Fantasy", 1954, 19.99f}
    };
    int choice, index;
    char buffer[100];
    do
    {
        system("cls");
        cout << "============= LIBRARY MENU =============" << endl;
        cout << "\tShow all books                [1]" << endl;
        cout << "\tSearch by title               [2]" << endl;
        cout << "\tSearch by author              [3]" << endl;
        cout << "\tSearch by publisher           [4]" << endl;
        cout << "\tSearch by genre               [5]" << endl;
        cout << "\tEdit book data                [6]" << endl;
        cout << "\tChange book price             [7]" << endl;
        cout << "\tAdd new book                  [8]" << endl;
        cout << "\tDelete book                   [9]" << endl;
        cout << "\tExit                          [0]" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 0:
            cout << "Exiting program. Goodbye!" << endl;
            break;
        case 1:
            Show(books, size);
            break;
        case 2:
            cout << "Enter book title: ";
            cin.getline(buffer, 100);
            SearchByTitle(books, size, buffer);
            break;
        case 3:
            cout << "Enter author: ";
            cin.getline(buffer, 100);
            SearchByAuthor(books, size, buffer);
            break;
        case 4:
            cout << "Enter publisher: ";
            cin.getline(buffer, 100);
            SearchByPublisher(books, size, buffer);
            break;
        case 5:
            cout << "Enter genre: ";
            cin.getline(buffer, 100);
            SearchByGenre(books, size, buffer);
            break;
        case 6:
            Show(books, size);
            cout << "Enter book number to edit (1-" << size << "): ";
            cin >> index;
            cin.ignore();
            ChangeData(books, size, index - 1);
            break;
        case 7:
            Show(books, size);
            cout << "Enter book number to change price (1-" << size << "): ";
            cin >> index;
            cin.ignore();
            ChangePrice(books, size, index - 1);
            break;
        case 8:
            AddBook(books, size);
            break;
        case 9:
            Show(books, size);
            cout << "Enter book number to delete (1-" << size << "): ";
            cin >> index;
            cin.ignore();
            DeleteBook(books, size, index - 1);
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
            break;
        }
        if (choice != 0)
        {
            cout << "\nPress any key to return to menu...";
            _getch();
        }
    } while (choice != 0);
    delete[] books;
    return 0;
}
