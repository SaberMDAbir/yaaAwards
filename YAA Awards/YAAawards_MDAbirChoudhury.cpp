//MD Abir A. Choudhury
//021518
//CIS 3100 - A4: YAA Awards

#include <iostream>
#include <limits>

using namespace std;

int main()
{
	int numMonths = 0; //# of monthly statements
	long long basePay = 1; //base payment for month 1

	//Output
	cout << "************************************************************************\n";
	cout << "                          Congratulations!!                             \n";
	cout << "************************************************************************\n\n";
	cout << "              Your prize will be paid in monthly payments               \n\n";

	//Input
	//Get number of monthly payments from user
	cout << "How many monthly payments must be made? \n\n";
	cin >> numMonths;

	//check for errors
	if (numMonths < 0) {
		cout << "Input another number again and restart the program. \n";
		system("PAUSE");
		return 0;
	}

	//Processing --> Output
	//Using a loop to calculate the maximum payment possible
	long long totalPayment = 0;
	totalPayment += basePay;
	cout << "Here are the monthly payment amounts: \n\n";
	cout << "Month 1: " << totalPayment << endl;

	int count = numMonths;
	int countMonth = 2;
	for (int i = 1; i < count; i++) {
		if (numMonths % 2 == 0) {
			totalPayment *= 2;;
			cout << "Month " << countMonth << ": " << totalPayment << endl;
		}
		else if ((numMonths % 2) != 0) {
			totalPayment *= 3; 
			cout << "Month "<< countMonth << ": " << totalPayment << endl;
		}
		numMonths--;
		countMonth++;
	}
	system("PAUSE");
	return 0;
}