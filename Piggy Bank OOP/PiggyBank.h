#pragma once
#include <iostream>

using namespace std;
//declares the class for piggy bank and the private and public variables.
class PiggyBank
{
private:
	string owner;
	string account;
	double q;
	double d;
	double n;
	double p;
	double saving;
	double tot;
	double ys1;
	double avg1;


public:
	PiggyBank();
	PiggyBank(string namev);
	double calc();
	double avg();
	void ys();
	void coinval(int quarts, int dimes, int nickels, int pennies, int weeks);

	
	friend ostream& operator<<(ostream&, const PiggyBank&);

};
