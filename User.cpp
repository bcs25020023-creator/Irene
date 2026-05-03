#include "User.h"
#include <iostream>
using namespace std;

User::User() 
{
    username = "";
    password = "";
}

void User::registerUser(string uname, string pass) 
{
    username = uname;
    password = pass;
    cout << "User registered: " << username << endl;
}

void User::login(string uname, string pass) 
{
    if (uname == username && pass == password) 
    {
        cout << "Login successful" << endl;
    } else 
    {
        cout << "Login failed" << endl;
    }
}