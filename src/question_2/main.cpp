#include "question2.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int sold, points_earned;
string play_again;

/*Prompt user for widgets sold (keyboard entry).  Validate for correct input.
Pass the widgets sold to the get_earned_points function, save the return value to a variable in main.
Display the Points Earned to Screen as follows: Points Earned 3
The program will loop until user opts out.*/

int main()
{
    do
    {
        do
        {
            cout << "Enter number of widgets sold: ";
            cin >> sold;
            
        }while(sold < 1);
            points_earned = get_earned_points(sold);
            cout << "Points earned " << points_earned << "\n";  

        cout << "Would you like to try another number? (y/n) \n";
        cin >> play_again;
        
    }while(play_again == "y");

    return 0;
}