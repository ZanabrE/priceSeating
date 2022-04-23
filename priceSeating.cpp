//This program is using switch statement for each 
//seat price.

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Variables
    int choice,
        tickets;
    double total;

    //Constants for tickets seat prices.
    const double classA = 15.00,
                 classB = 12.00,
                 classC = 9.00;
    
    //Constants for seat class.
    const int CLASS_A = 1,
              CLASS_B = 2,
              CLASS_C = 3,
              QUIT = 4;

    //Displaying the tickets seat prices and get the choice.
    cout << "-----------------------------------------------------------\n";
    cout << "             Stadium Seating Pricing Tickets\n";
    cout << "-----------------------------------------------------------\n";
    cout << "1. Tickets for Class A cost $15\n";
    cout << "2. Tickets for Class B cost $12\n";
    cout << "3. Tickets for Class C cost $9\n";
    cout << "4. No tickets\n";
    cout << "-----------------------------------------------------------\n";
    cout << "Enter your seat choice: \n";
    cin >> choice;

    //Set the numeric output formatting.
    cout << fixed << showpoint << setprecision(2);

    //Respond to the user menus selection.
    switch (choice)
    {
    case CLASS_A:
        cout << "How many tickets would you like?\n";
        cin >> tickets;
        total = tickets * classA;
        cout << tickets << " tickets and the total is $" << total << endl;
        break;
    
    case CLASS_B:
        cout << "How many tickets would you like?\n";
        cin >> tickets;
        total = tickets * classB;
        cout << tickets << " tickets and the total is $" << total << endl;
        break;
    
    case CLASS_C:
        cout << "How many tickets would you like?\n";
        cin >> tickets;
        total = tickets * classC;
        cout << tickets << " tickets and the total is $" << total << endl;
        break;

    case QUIT:
        cout << "Have a great day!\n";
        break;

    default:
        cout << "The choices are from 1 to 4\n";
        cout << "Please enter the right seat choice.\n";
    }

    return 0;
}