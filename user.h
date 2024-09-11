#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string name;
    std::string userID;

public:
    User();
    User(std::string n, std::string id);
    void setName(std::string n);
    void setUserID(std::string id);
    std::string getName() const;
    std::string getUserID() const;
    void display() const;
};

#endif
