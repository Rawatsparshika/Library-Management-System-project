#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string ISBN;
    bool isIssued;

public:
    Book();
    Book(std::string t, std::string a, std::string i);
    void setTitle(std::string t);
    void setAuthor(std::string a);
    void setISBN(std::string i);
    void setIssued(bool status);
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getISBN() const;
    bool getIssued() const;
    void display() const;
};

#endif
