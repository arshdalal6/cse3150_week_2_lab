#include <iostream>
#include <algorithm>
#include <string>
#pragma once

namespace StringUtils{
    void parseName(const std::string& fullName, std::string* firstName, std::string* lastName){
        size_t space_pos = fullName.find(' ');


        *firstName = fullName.substr(0, space_pos);
        *lastName = fullName.substr(space_pos + 1);
    };


    std::string getUsername(const std::string& email){
        size_t symbol_pos = email.find('@');

        std::string username = email.substr(0, symbol_pos);
        
        return username;
    };
}