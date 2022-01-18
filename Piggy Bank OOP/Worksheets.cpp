/*
* Name:Jadon Oliver
* Program Name: Piggy Bank OOP
* Date:12/16/21
* Extra Things: Asks the user for their 6 digit account number for their account, error traps it and stores the data for later
*/

#include "Worksheets.h"
#include "PiggyBank.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
string dummy = "";

void worksheet1(string namedItem) {
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    cout.setf(ios::fixed);

    //declares all my variables.
    bool quitv = false;
    bool quit1 = false;
    bool quit2 = false;
    bool quit3 = false;
    bool quit4 = false;
    bool quit5 = false;
    bool quit6 = false;
    bool goodData = true;
    bool goodData1 = true;
    bool goodData2 = true;
    bool goodData3 = true;
    bool goodData4 = true;
    bool goodData5 = true;
    bool goodData6 = true;
    int quartsi = 0;
    int dimesi = 0;
    int nickelsi = 0;
    int penniesi = 0;
    int weeksi = 0;
    string namev = "";
    string quarts = "";
    string dimes = "";
    string nickels = "";
    string pennies = "";
    string weeks = "";
    string acnum = "";

    do {

        //asks the user for input
        cout << "Please enter your name" << endl;
        getline(cin, namev);
        //Uses error trapping provided by Mrs. Digiovanna to make sure the input given is acceptable.
        for (int i = 0; i < namev.length(); i++) {

            if (isdigit(namev[i])) {
                cout << "User was asked for name not numbers, please try again." << endl;
                goodData = false;
            }

            else if (namev[i] == '!' || namev[i] == '@' || namev[i] == '#' || namev[i] == '$' || namev[i] == '%' || namev[i] == '^' || namev[i] == '&' || namev[i] == '*' || namev[i] == '(' || namev[i] == ')' || namev[i] == '-' || namev[i] == '_' || namev[i] == '=' || namev[i] == '+' || namev[i] == ']' || namev[i] == '|' || namev[i] == '}' || namev[i] == '[' || namev[i] == '{' || namev[i] == '.' || namev[i] == ',' || namev[i] == '<' || namev[i] == '>' || namev[i] == '/' || namev[i] == '?' || namev[i] == '`' || namev[i] == '`' || namev[i] == ':' || namev[i] == ';') {
                cout << "User entered a special character, please try again." << endl;
                goodData = false;
            }

            else if (namev.length() == 0) {
                cout << "The user entered nothing, please try again." << endl;
                quitv = true;
            }

        }

        if (goodData == true) {
            quitv = true;
        }
        goodData = true;
    } while (!quitv);

    //EXTRA: Asks the user for their 6 digit account number for their accoun, error traps it and stores the data for later
    do {

        cout << "Please enter your 6 digit account number" << endl;
        getline(cin, acnum);

        //Uses error trapping provided by Mrs. Digiovanna to make sure the input given is acceptable.
        for (int i = 0; i < acnum.length(); i++) {

            if (!isdigit(acnum[i]) || ((acnum.length() < 6) || (acnum.length() > 6))) {
                cout << "You entered bad data, please try again\n" << endl;
                goodData6 = false;
            }
        }

        if (goodData6 == true) {
            quit6 = true;
        }
        goodData6 = true;
    } while (!quit6);

    //Asks the user how many quaters they've saved and uses it for output later in the code.
    do {

        cout << "How many quarters have you saved?" << endl;
        getline(cin, quarts);

        //Uses error trapping provided by Mrs. Digiovanna to make sure the input given is acceptable.
        for (int i = 0; i < quarts.length(); i++) {

            if (!isdigit(quarts[i])) {
                cout << "You entered bad data, please try again\n" << endl;
                goodData1 = false;
            }
        }

        if (goodData1 == true) {

            quartsi = stoi(quarts);
            quit1 = true;
        }
        goodData1 = true;
    } while (!quit1);

    //Asks the user how many dimes they've saved and uses it for output later in the code.
    do {

        cout << "How many dimes have you saved?" << endl;
        getline(cin, dimes);

        //Uses error trapping provided by Mrs. Digiovanna to make sure the input given is acceptable.
        for (int i = 0; i < dimes.length(); i++) {

            if (!isdigit(dimes[i])) {
                cout << "You entered bad data, please try again\n" << endl;
                goodData2 = false;
            }
        }

        if (goodData2 == true) {

            dimesi = stoi(dimes);
            quit2 = true;
        }
        goodData2 = true;
    } while (!quit2);

    //Asks the user how many nickels they've saved and uses it for output later in the code.
    do {

        cout << "How many nickels have you saved?" << endl;
        getline(cin, nickels);

        //Uses error trapping provided by Mrs. Digiovanna to make sure the input given is acceptable.
        for (int i = 0; i < nickels.length(); i++) {

            if (!isdigit(nickels[i])) {
                cout << "You entered bad data, please try again\n" << endl;
                goodData3 = false;
            }
        }

        if (goodData3 == true) {

            nickelsi = stoi(nickels);
            quit3 = true;
        }
        goodData3 = true;
    } while (!quit3);

    //Asks the user how many pennies they've saved and uses it for output later in the code.
    do {

        cout << "How many pennies have you saved?" << endl;
        getline(cin, pennies);

        //Uses error trapping provided by Mrs. Digiovanna to make sure the input given is acceptable.
        for (int i = 0; i < pennies.length(); i++) {

            if (!isdigit(pennies[i])) {
                cout << "You entered bad data, please try again\n" << endl;
                goodData4 = false;
            }
        }

        if (goodData4 == true) {

            penniesi = stoi(pennies);
            quit4 = true;
        }
        goodData4 = true;
    } while (!quit4);

    //Asks the user how many weeks they've been saving for and uses it for output later in the code.
    do {

        cout << "How many weeks have you been saving for " << endl;
        getline(cin, weeks);

        //Uses error trapping provided by Mrs. Digiovanna to make sure the input given is acceptable.
        for (int i = 0; i < weeks.length(); i++) {

            if (!isdigit(weeks[i]) || (stoi(weeks) < 1)) {
                cout << "You entered bad data, please try again\n" << endl;
                goodData5 = false;
            }
        }

        if (goodData5 == true) {

            weeksi = stoi(weeks);
            quit5 = true;
        }
        goodData5 = true;
    } while (!quit5);

    //calls Piggy Bank
    PiggyBank person = PiggyBank(namev);
    PiggyBank accountn = PiggyBank(acnum);
    person.coinval(quartsi, dimesi, nickelsi, penniesi, weeksi);
    double total = person.calc();
    double average = person.avg();
    person.ys();
    cout << endl << person;
    
    //prints out all of the information collected from the user and makes all the neccesary calculations.
    cout << "\nOwner: " << namev << endl;
    cout << "Account Number: " << acnum << endl;
    cout << "Quarters:\t" << quartsi << "\t$" << setprecision(2) << (quartsi * .25) << endl;
    cout << "Dimes:\t\t" << dimesi << "\t$" << setprecision(2) << (dimesi * .1) << endl;
    cout << "Nickels:\t" << nickelsi << "\t$" << setprecision(2) << (nickelsi * .05) << endl;
    cout << "Pennies:\t" << penniesi << "\t$" << setprecision(2) << (penniesi * .01) << "\n" << endl;
    cout << "Total:\t" << "\t$" << setprecision(2) << total << "\n" << endl;
    cout << namev << ", you have saved an average of $" << setprecision(2) << average << " per week!" << endl;
    
    cout << endl << person;
    if (weeksi > 52) {
        cout << "\nYou've been saving for over a year? Impressive!" << endl;
    }
}