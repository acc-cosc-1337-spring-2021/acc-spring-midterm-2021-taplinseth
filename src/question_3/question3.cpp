#include "question3.h"
#include <string>
using std::string;

//function will convert the value of the double parameter into a letter grade
string gpa_to_letter_grade(double gpa)
{
    if(gpa >= 3.50 && gpa <= 4.00)
    {
        return "A"; 
    }   
    else if(gpa >= 3.00 && gpa <= 3.49)
    {
        return "B";
    }
    else if(gpa >= 2.00 && gpa <= 2.99)
    {
        return "C";
    }
    else if(gpa >= 1.00 && gpa <= 1.99)
    {
        return "D";
    }
    else if(gpa >= 0.00 && gpa <= 0.99)
    {
        return "F";
    }
    else
    {
        return "invalid";
    }
    
}


bool test_config()
{
    return true;
}