#include "user.hpp"

User::User(const std::string &name, const std::string &login, const std::string &pass) : name(_name), login(_login), pass(_pass) {}
{
std::fstream &User::operato>>(std::fstream &is, User &obj)

{
    is >> obj._name;
    is >> obj._login;
    is >> obj._pass;
    return is;
}
std::ostream &User::operato<<(std::ostream &os, const User &obj)
{
	os << obj._name;
	os << ' ';
	os << obj._login;
	os << ' ';
	os << obj._pass;
	return os;
}
}
User::~User()
{
}