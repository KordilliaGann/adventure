// Kristine Laranjo, Emily Garcia, Kori Gann, Mavey Ma
#include <iostream>
#include <string>
#include <iomanip>
#include <cassert>

using namespace std;

char menu();
int numberOfPeople(); //COUT QUESTION AND RETURNS # OF PEOPLE
double climbing();
double scuba();
double skyDive();
double spelunk();
void receipt(double basePrice, int numPeople);
double discount(double basePrice, int people);

int main()
{
    //What climbing is supposed to give back with that imput
    /*
    climbing - 5 peeps
    1750 base
    500  5 climbing instruction
    2000 5 peeps 10 days
    discount 175
    1575 base with discount
    4075 total
    */

    //What scuba is supposed to give back with that imput
    /*
    scuba - 6 peeps
    6000 base
    300  3 scuba instruction
    discount 600
    5400 base with discount
    5700 total
    */

    //What sky dive is supposed to give back with that imput
    /*
    sky dive - 4 peeps
    2800 base
    1300  2 peeps 10 days lodging at wilderness
    2400  2 peeps 10 days lodging at luxury
    0 discount
    2800 base without discount
    6500 total
    */
    
    //What spelunk is supposed to give back with that imput
    /*
    spelunk - 7 peeps
    4900 base
    800  4 peeps 5 days equipment
    490 discount
    4410 base with discount
    5210 total
    */

    menu();
    return 0;
}

char menu()
{
    char option;
    cout << "\nWelcome to High Adventure Travel Agency.\n\n";
    // Prints pretty menu and prices
    cout << "Option 1: Devil's Courthouse Adventure Weekend - base price $350 per person" << endl;
    cout << "Option 2: Scuba Bahama - base price $1000 per person" << endl;
    cout << "Option 3: Sky Dive Colorado - base price $700 per person" << endl;
    cout << "Option 4: Barron Cliff Spelunk - base price $700 per person" << endl;

    //Asks for option
    cout << "Which option do you want: 1, 2, 3, 4? ";
    cin >> option;
    while (option != '1' && option != '2' && option != '3' && option != '4') //makes sure user chooses a valid option
    {
        cout << "Incorrect option please pick 1, 2, 3, or 4" << endl;
        cin >> option;
    }
    
    //Allows ifs in receipt to work
    switch(option)
    {
        case '1':
            climbing();
            break;
        case '2':
            scuba();
            break;
        case 3:
            skyDive();
            break;
        case 4:
            spelunk();
            break;
    }
    
    return option;

} //end menu

int numberOfPeople()
{
    int num;
    cout << "How many people are you paying for today, including yourself?\n";
    cin >> num;
    return num;
}//END NUMBER OF PEOPLE FUNCTION

double climbing()
{
    int totalCharge, baseCharge, lessonCharge, rentalCharge;
    int lessonNum, rentalNum, numberOfDays;
    
    cout << "You've selected Climbing!\n";
    baseCharge = 350 * numberOfPeople();
    
    cout << "How many days are you staying?" << endl;
    cin >> numberOfDays;
    
    cout << "How many would like a climbing instructor? ($100 per person)" << endl;
    cin >> lessonNum;
    lessonCharge = lessonNum * 100;
    
    cout << "How many would like to rent equipment ($40/day per person)" << endl;
    cin >> rentalNum;
    rentalCharge = rentalNum * (40 * numberOfDays);
    
    totalCharge = baseCharge + lessonCharge + rentalCharge;
    receipt(discount(totalCharge,numberOfPeople()), numberOfPeople());
    
    return totalCharge;

}//END CLIMBING

double scuba()
{
    int totalCharge, baseCharge, lessonCharge;
    int lessonNum, numberOfDays;
    
    cout << "You've selected Scuba Diving!\n";
    baseCharge = 1000 * numberOfPeople();
    
    cout << "How many days are you staying?" << endl;
    cin >> numberOfDays;
    
    cout << "How many would like a scuba instructor? ($100 per person)" << endl;
    cin >> lessonNum;
    lessonCharge = lessonNum * 100;
    
    totalCharge = baseCharge + lessonCharge;
    receipt(discount(totalCharge,numberOfPeople()), numberOfPeople());
    
    return totalCharge;

}//END SCUBA

double skyDive()
{
    int totalCharge, baseCharge, lodgeCharge, innCharge;
    int lodgeNum, innNum, numberOfDays;
    
    cout << "You've selected Sky Diving!\n";
    baseCharge = 700 * numberOfPeople();
    
    cout << "How many days are you staying?" << endl;
    cin >> numberOfDays;
    
    cout << "How many would like housing at Wilderness Lodge? ($65/day per person)" << endl;
    cin >> lodgeNum;
    lodgeCharge = lodgeNum * (65 * numberOfDays);
    
    cout << "How many would like housing at Luxury Inn? ($120/day per person)" << endl;
    cin >> innNum;
    innCharge = innNum * (120 * numberOfDays);
    
    totalCharge = baseCharge + lodgeCharge + innCharge;
    receipt(discount(totalCharge,numberOfPeople()), numberOfPeople());
    
    return totalCharge;

}//END SKY DIVE

double spelunk()
{
    int totalCharge, baseCharge, lessonCharge, rentalCharge;
    int lessonNum, rentalNum, numberOfDays;
    
    cout << "You've selected Spelunking!\n";
    baseCharge = 700 * numberOfPeople();
    
    cout << "How many days are you staying?" << endl;
    cin >> numberOfDays;
    
    cout << "How many would like to rent equipment ($40/day per person)" << endl;
    cin >> rentalNum;
    rentalCharge = rentalNum * (40 * numberOfDays);
    
    totalCharge = baseCharge + rentalCharge;
    receipt(discount(totalCharge,numberOfPeople()), numberOfPeople());
    
    return totalCharge;

}//END SPELUNK

void receipt(double basePrice, int numPeople)
{
    int people = numPeople;
    double basicPrice = basePrice;
    char chosen = menu();
    double additional;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    /*if (chosen == 1)//gets additional prices for packages if any
    {
        additional = climbing();
    }
    else if(chosen == 2)
    {
        additional = scuba();
    }
        else if(chosen == 3)
    {
       additional = skyDive();
    }
        else if(chosen == 4)
    {
       additional = spelunk();
    }*/
    cout << "\tYour Receipt" << endl;
    cout << "Basic Package- ...$" << basePrice << endl;
    if ( numPeople >= 5 )
    {
        cout << "Five or more people discount- ..." << discount(basePrice, people);
    }
    if (additional > 0)
    {
        cout << "Additional Packages- ...$" << additional << endl;
    }
}

double discount(double basePrice, int people)
{
    double finalBase = (basePrice * people) * .10;
    return finalBase;
}
