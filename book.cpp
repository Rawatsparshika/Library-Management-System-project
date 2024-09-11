#include "book.h"
#include <iostream>

Book::Book() : title(""), author(""), ISBN(""), isIssued(false) {}

Book::Book(std::string t, std::string a, std::string i) : title(t), author(a), ISBN(i), isIssued(false) {}

void Book::setTitle(std::string t) { title = t; }
void Book::setAuthor(std::string a) { author = a; }
void Book::setISBN(std::string i) { ISBN = i; }
void Book::setIssued(bool status) { isIssued = status; }

std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
std::string Book::getISBN() const { return ISBN; }
bool Book::getIssued() const { return isIssued; }

void Book::display() const {
    std::cout << "Title: " << title << "\n";
    std::cout << "Author: " << author << "\n";
    std::cout << "ISBN: " << ISBN << "\n";
    std::cout << "Status: " << (isIssued ? "Issued" : "Available") << "\n";
}
