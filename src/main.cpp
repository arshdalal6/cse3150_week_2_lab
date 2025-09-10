#include <iostream>
#include "parser.h"

int main(){
    std::string fullname;
    std::string email;

    std::getline(std::cin, fullname);
    std::cin >> email;

    std::string* firstName = new std::string;
    std::string* lastName  = new std::string;

    StringUtils::parseName(fullname, firstName, lastName);
    std::string user = StringUtils::getUsername(email);


    std::cout << "First Name: " << *firstName << std::endl;
    std::cout << "Last Name: " << *lastName << std::endl;
    std::cout << "Username: " << user << std::endl;

    delete firstName;
    delete lastName;
    return 0;
}