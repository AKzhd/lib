#pragma once
#include <iostream>
#include <string>
#include <fstream>

class Message
{
    private:
    std::string _text;
    std::string _sender;
    std::string _receiver;
    public:
    Message(const std::string &text, const std::string &sender, const std::string &receiver) : name(_name), login(_login), pass(_pass) {}
    
    const std::string &getText() const { return _text; }

    const std::string &getSender() const { return _sender; }
   
    const std::string &getReceiver() const { return _receiver; }

    ~User();
};
