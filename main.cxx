// compile : cl /EHsc /I includes /Tp main.cxx /link cxxhex_x64.lib

#include "hex.hxx"

using namespace std;
using namespace Hex;

int main(void)
{
    string encoded = hex_encode("hello world");
    cout << "Encoded (hello world) : " << encoded << endl;
    cout << "Decoded : " << hex_decode(encoded) << endl;

    return (0);
}