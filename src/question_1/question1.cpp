#include "question1.h"
#include <string>
#include <algorithm>
#include <iomanip>
#include <iostream>
using std::cout;

using std::string;

//function will convert an int value to its binary representation and returns the binary string value
string decimal_to_binary(int user_value)
{
    string bits;
    while(user_value > 0)
    {
        bits.append(std::to_string(user_value % 2));
        user_value /= 2;
    }
    reverse(bits.begin(), bits.end()); //reverses bits string
    
    bits.insert(bits.begin(), 8 - bits.length(), '0'); //pads bits string to a length of 8 characters if needed
    return bits;
}

bool test_config()
{
    return true;
}