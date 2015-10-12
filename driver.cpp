// Kristine Laranjo, Emily Garcia, Kori Gann, Mavey Ma
#include <iostream>
#include <string>
#include <iomanip>
#include <cassert>

using namespace std;

char menu();
double climbing();
double scuba();
double skyDive();
double spelunk();

int main()
{

    return 0;
}

char menu()
{
    char option;
    // Prints pretty menu and prices
    cout << "Option 1: Devil's Courthouse Adventure Weekend - base price $350 per person" << endl;
    cout << "Option 2: Scuba Bahama - base price $1000 per person" << endl;
    cout << "Option 3: Sky Dive Colorado - base price $700 per person" << endl;
    cout << "Option 4: Barron Cliff Spelunk - base price $1000 per person" << endl;

    //Asks for option
    cout << "Which option do you want: 1, 2, 3, 4?";
    cin >> option;
    while (option != '1' && option != '2' && option != '3' && option != '4') //makes sure user chooses a valid option
    {
        cout << "Incorrect option please pick 1, 2, 3, or 4" << endl;
        cin >> option;
    }
    
    //Allows ifs in receipt to work
    switch(option)
    {
        case 1:
            return 1;
            break;
        case 2:
            return 2;
            break;
        case 3:
            return 3;
            break;
        case 4:
            return 4;
            break;
    }

} //end menu
    
