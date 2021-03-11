#include "question3.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

double gpa;
string letter_grade, play_again;

/*Prompt the user for a double value,
validate the value is from 0 to 4,
call the gpa_to_letter_grade function, save its return value to a local variable,
and output the result.  The function continues until user decides to quit*/

int main()
{
    do
    {
        do
        {
            cout << "Enter a GPA between 0.00 and 4.00: \n";
            cin >> gpa;

        }while(gpa < 0.00 || gpa > 4.00);
            letter_grade = gpa_to_letter_grade(gpa);
            cout << letter_grade << "\n";
        
        cout << "Would you like to enter another GPA? (y/n) \n";
        cin >> play_again;
    
    }while(play_again == "y");
    
    return 0;
}