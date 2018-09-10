#ifndef MESSAGE_TERM_H
#define MESSAGE_TERM_H

#include <string>
#include "vendor/json.hpp"
using namespace std;
using nlohmann::json;

// ----- PRINT FUNC: message.cpp -----

void print(string msg);

// ----- MESSAGE CLASS: message.cpp -----

class Message {
private:
    string sender;
    string message;
public:
    Message(string _sender, string _message);
    void print_message();
    json serialize(string path);
    json deserialize(string path);
};

// ----- HANDLER CLASS: handler.cpp -----

class Handler {
public:
    Handler(bool auto_install);
    int write(string filename, string text);
    int auto_install();
    int send(string number, string message);
    int recieve(string name, string message);
};

#endif