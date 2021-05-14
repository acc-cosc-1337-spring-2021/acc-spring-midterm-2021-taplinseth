#include "question1.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int user_value;
string play_again, binary_number;

/*Prompt the user for an int value, validate the int value is in the range of 1 to 255,
call the decimal_to_binary function, save the result to a local variable,
and output the result.  The program will run until the user opts to exit.*/

int main()
{ 
    do
    {
        do
        {
            cout << "Enter a number between 1 and 255: ";
            cin >> user_value;

        }while(user_value < 1 || user_value > 255);
            binary_number = decimal_to_binary(user_value);
            cout << binary_number << "\n";

        cout << "Would you like to try another number? (y/n) \n";
        cin >> play_again;
        
    }while(play_again == "y");
    
    return 0;
}