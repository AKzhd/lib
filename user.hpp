#pragma once
#include <fstream>
#include <iostream>
#include <string>

class User
{
private:
    std::string _name;
    std::string _login;
    std::string _pass;

public:
    User(const std::string &name, const std::string &login, const std::string &pass) : name(_name), login(_login), pass(_pass) {}
    void setName(const std::string &name)
    {
        _name = name;
    }
    const std::string &getName() const { return _name; }

    const std::string &getLogin() const { return _login; }
    void setPass(const std::string &pass)
    {
        _pass = pass;
    }
    const std::string &getPass() const { return _pass; }

    ~User();
};
