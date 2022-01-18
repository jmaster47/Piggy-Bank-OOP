#include "PiggyBank.h"
#include <iostream>
#include <iomanip>

using namespace std;

//declares all of the functions run within the class.
PiggyBank::PiggyBank() {}
PiggyBank::PiggyBank(string namev) {
	owner = namev;
}

void PiggyBank::coinval(int quartsi, int dimesi, int nickelsi, int penniesi, int weeksi) {
	q = quartsi;
	d = dimesi;
	n = nickelsi; 
	p = penniesi;
	saving = weeksi;

}
double PiggyBank::calc() {
	tot = (q * 0.25)+(d * 0.10)+(n * 0.05)+(p * 0.01);
		return tot;
}

double PiggyBank::avg() {
	avg1 = tot / saving;
	return avg1;
}
void PiggyBank::ys() {
	ys1 = 52 * avg1;
}
ostream& operator<<(ostream& output, const PiggyBank& aPiggyBank) {
	cout.setf(ios::fixed);
	output << "You're on track to earn about $" << setprecision(2) << aPiggyBank.ys1 << " this year!";
		return output;
}