#include "user.h"
#include <iostream>

User::User() : name(""), userID("") {}

User::User(std::string n, std::string id) : name(n), userID(id) {}

void User::setName(std::string n) { name = n; }
void User::setUserID(std::string id) { userID = id; }

std::string User::getName() const { return name; }
std::string User::getUserID() const { return userID; }

void User::display() const {
    std::cout << "Name: " << name << "\n";
    std::cout << "User ID: " << userID << "\n";
}
