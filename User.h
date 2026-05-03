#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User 
{
private:
    string username;
    string password;

public:
    User();
    void registerUser(string uname, string pass);
    void login(string uname, string pass);
};

#endif