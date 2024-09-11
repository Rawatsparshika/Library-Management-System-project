#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "book.h"
#include "user.h"
#include <vector>

void addBook(std::vector<Book> &books);
void viewBooks(const std::vector<Book> &books);
void searchBook(const std::vector<Book> &books);
void deleteBook(std::vector<Book> &books);

void addUser(std::vector<User> &users);
void viewUsers(const std::vector<User> &users);
void searchUser(const std::vector<User> &users);

void issueBook(std::vector<Book> &books, std::vector<User> &users);
void returnBook(std::vector<Book> &books);
void viewIssuedBooks(const std::vector<Book> &books);

#endif
