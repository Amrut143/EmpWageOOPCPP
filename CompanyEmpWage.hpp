#include <iostream>
using namespace std;

class CompanyEmpWage {

	public:
	string companyName;
	int wagePerHr;
	int numOfWorkingDays;
	int maxHrsInMonth;
	int monthlyWage;

	public:
	CompanyEmpWage(string companyName, int wagePerHr, int numOfWorkingDays, int maxHrsInMonth) {

		this -> wagePerHr = wagePerHr;
		this -> numOfWorkingDays = numOfWorkingDays;
		this -> maxHrsInMonth = maxHrsInMonth;
		this -> companyName = companyName;
	}

	public:
	void setEmpWagePerMonth(int monthlyWage) {

		this -> monthlyWage = monthlyWage;
	}
};
