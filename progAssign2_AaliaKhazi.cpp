#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int N; //number of payments made
	double monthlyPayments;
	double loanAmount; 
	double monthlyInterestRate;
	double amountPaidBack;
	double interestPaid;

	cout << " Please enter your loan amount: ";
	cin >> loanAmount;
	cout << endl;
	cout << " Please enter your monthly interest rate as a decimal" <<
		"(for example, if your interest rate is 0.5% then enter 0.005): " << endl;
	cin >> monthlyInterestRate;
	cout << endl;
	cout << " Please enter the number of payments you've made: ";
	cin >> N;
	cout << endl;

	
	monthlyPayments = ((monthlyInterestRate * pow((1 + monthlyInterestRate), N)) / (pow((1 + monthlyInterestRate), N) - 1)) * loanAmount;
	amountPaidBack = (monthlyPayments * N);
	interestPaid = (amountPaidBack - loanAmount);

	cout << endl << endl;
	cout << fixed << showpoint << setprecision(2); //decimal manipulators
	cout << left; //aligning output
	cout << setw(30) << " Loan Amount: " << "$" << loanAmount << endl;
	cout << setw(30) << " Monthly Interest Rate: " << (monthlyInterestRate * 100) << "%" << endl;
	cout << setw(30) << " Number of Payments: " << N << endl;
	cout << setw(30) << " Monthly Payments: " << "$" << monthlyPayments << endl;
	cout << setw(30) << " Amount Paid Back: " << "$" << amountPaidBack << endl;
	cout << setw(30) << " Interest Paid " << "$" << interestPaid << endl;

	return 0;
}