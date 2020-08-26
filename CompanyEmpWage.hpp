#include <iostream>
using namespace std;

class CompanyEmpWage {

	public:
	string company;
	int wagePerHr;
	int numOfWorkingDays;
	int maxHrsInMonth;
	int monthlyWage;

	public:
	CompanyEmpWage(string company, int wagePerHr, int numOfWorkingDays, int maxHrsInMonth) {

		this -> wagePerHr = wagePerHr;
		this -> numOfWorkingDays = numOfWorkingDays;
		this -> maxHrsInMonth = maxHrsInMonth;
		this -> company = company;
	}

	public:
	void setEmpWagePerMonth(int monthlyWage) {

		this -> monthlyWage = monthlyWage;
	}
};
