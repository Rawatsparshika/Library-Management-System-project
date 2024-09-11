#include "functions.h"
#include <iostream>
#include <algorithm>
#include <fstream>

// Book functions
void addBook(std::vector<Book> &books) {
    std::string title, author, ISBN;
    std::cout << "Enter Book Title: ";
    std::getline(std::cin, title);
    std::cout << "Enter Author: ";
    std::getline(std::cin, author);
    std::cout << "Enter ISBN: ";
    std::getline(std::cin, ISBN);
    books.push_back(Book(title, author, ISBN));
}

void viewBooks(const std::vector<Book> &books) {
    for (const auto &book : books) {
        book.display();
        std::cout << "----------------------\n";
    }
}

void searchBook(const std::vector<Book> &books) {
    std::string ISBN;
    std::cout << "Enter ISBN to search: ";
    std::getline(std::cin, ISBN);
    auto it = std::find_if(books.begin(), books.end(), [&](const Book &b) {
        return b.getISBN() == ISBN;
    });
    if (it != books.end()) {
        it->display();
    } else {
        std::cout << "Book not found.\n";
    }
}

void deleteBook(std::vector<Book> &books) {
    std::string ISBN;
    std::cout << "Enter ISBN to delete: ";
    std::getline(std::cin, ISBN);
    auto it = std::remove_if(books.begin(), books.end(), [&](const Book &b) {
        return b.getISBN() == ISBN;
    });
    if (it != books.end()) {
        books.erase(it, books.end());
        std::cout << "Book deleted.\n";
    } else {
        std::cout << "Book not found.\n";
    }
}

// User functions
void addUser(std::vector<User> &users) {
    std::string name, userID;
    std::cout << "Enter User Name: ";
    std::getline(std::cin, name);
    std::cout << "Enter User ID: ";
    std::getline(std::cin, userID);
    users.push_back(User(name, userID));
}

void viewUsers(const std::vector<User> &users) {
    for (const auto &user : users) {
        user.display();
        std::cout << "----------------------\n";
    }
}

void searchUser(const std::vector<User> &users) {
    std::string userID;
    std::cout << "Enter User ID to search: ";
    std::getline(std::cin, userID);
    auto it = std::find_if(users.begin(), users.end(), [&](const User &u) {
        return u.getUserID() == userID;
    });
    if (it != users.end()) {
        it->display();
    } else {
        std::cout << "User not found.\n";
    }
}

// Book transactions
void issueBook(std::vector<Book> &books, std::vector<User> &users) {
    std::string ISBN, userID;
    std::cout << "Enter Book ISBN to issue: ";
    std::getline(std::cin, ISBN);
    std::cout << "Enter User ID: ";
    std::getline(std::cin, userID);
    auto bookIt = std::find_if(books.begin(), books.end(), [&](const Book &b) {
        return b.getISBN() == ISBN;
    });
    auto userIt = std::find_if(users.begin(), users.end(), [&](const User &u) {
        return u.getUserID() == userID;
    });
    if (bookIt != books.end() && userIt != users.end()) {
        if (!bookIt->getIssued())
