#include <iostream>
#include "Worksheets.h"


using namespace std;

int main()
{

    bool runAgain = false;
    string answer = "n";
    string dummy = "";

    string ws1Name = "Piggy Bank";

    do {

        worksheet1(ws1Name);
        cout << "\nRun Again y/n ";
        getline(cin, answer);
        if (answer == "y" || answer == "Y") {
            runAgain = true;
        }
        else {
            runAgain = false;
        }
    } while (runAgain);
}