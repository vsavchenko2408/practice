#include <iostream>
#include <string>
#include <deque>
using namespace std;

class Book
{
    string author;
    string name;
    size_t year;

public:
    Book() : author("empty"), name("empty"), year(0)
    {
        cout << "\nName: ";
        cin >> name;
        cout << "\nAuthor: ";
        cin >> author;
        cout << "\nYear: ";
        cin >> year;
    }
    Book(string name, string author, size_t year) : name(name), author(author), year(year) {}
    void show_info()
    {
        cout << "Name: \t" << name << endl;
        cout << "Author: \t" << author << endl;
        cout << "Year: \t" << year << endl;
    }
    void set_info()
    {
        cout << "\nName: ";
        cin >> name;
        cout << "\nAuthor: ";
        cin >> author;
        cout << "\nYear: ";
        cin >> year;
    }
    void set_info(string name, string author, size_t year)
    {
        this->name = name;
        this->author = author;
        this->year = year;
    }
    Book create_book(string name, string author, size_t year)
    {
        return Book(name, author, year);
    }
};

int main()
{
    deque<Book> Library;
    Book lotr;
    lotr.set_info("LOTR", "Tolkien", 1954);
    Book mam = lotr.create_book("Bulgakov", "M&M", 1924);
    Library.push_back(lotr);
    Library.push_back(mam);
    Library.push_back(Book());
    for (auto &i : Library)
    {
        i.show_info();
    }
}