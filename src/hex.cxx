#include "hex.hxx"

namespace Hex
{
    unsigned char hex_nibble(char c)
    {
        if (c >= 'A' && c <= 'F')
            c |= 0x20;
        
        return ((c >= '0' && c <= '9') ? (c & 0xF) : (c >= 'a' && c <= 'f') ? 10 + (c - 'a') : 0);
    }

    static char hex_tab[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    std::string hex_encode(std::string str)
    {
        std::string encoded = "";

        for (int i = 0; i < str.length(); i++) {
            encoded += hex_tab[str.at(i) >> 4];
            encoded += hex_tab[str.at(i) & 0xF];
        }
        
        return (encoded);
    }

    std::string hex_decode(std::string str)
    {
        std::string decoded = "";
        unsigned char tmp = 0;

        for (int i = 0; i < str.length(); i += 2) {
            tmp = hex_nibble(str.at(i));
            tmp <<= 4;
            tmp += hex_nibble(str.at(i+1));
            decoded += tmp;
        }

        return (decoded);
    }
    
};