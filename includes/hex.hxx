#pragma once
#include <iostream>

// hex.cxx
namespace Hex
{
    unsigned char hex_nibble(char c);
    std::string hex_encode(std::string str);
    std::string hex_decode(std::string str); 
};