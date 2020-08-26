#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>
#include "CompanyEmpWage.hpp"
#include "EmpWageInterface.hpp"
using namespace std;

class EmpWageBuilder : IEmpWageBuilder {

	list<CompanyEmpWage*> companyList;
	list<int> dailyWage;

	public:
	void addCompanyEmpWage(string companyName, int wagePerHr, int numOfWorkingDays, int maxHrsInMonth) {

		companyList.push_back(new CompanyEmpWage(companyName, wagePerHr, numOfWorkingDays, maxHrsInMonth));
	}

	void getTotalWageByCompany(string companyName) {

		for(CompanyEmpWage *company : companyList) {

			if(company -> companyName == companyName) {

				cout << "Total Wage for Company " << companyName << " Is " << company -> monthlyWage;
			}
		}
	}

	private:
	int calculateEmpWage(CompanyEmpWage &companyEmpWage) {

		const int PART_TIME = 1;
		const int FULL_TIME = 2;

		int empHrs;
		int totalEmpHrs = 0;
		int totalWorkingDays = 0;

		srand(time(0));

		while(totalEmpHrs <= companyEmpWage.maxHrsInMonth && totalWorkingDays < companyEmpWage.numOfWorkingDays) {
			totalWorkingDays++;

			int empCheck = rand() % 3;

			switch(empCheck) {

				case PART_TIME:
					empHrs = 4;
					break;

				case FULL_TIME:
					empHrs = 8;
					break;

				default:
					empHrs = 0;
			}
			dailyWage.push_back(empHrs * companyEmpWage.wagePerHr);
			totalEmpHrs += empHrs;
		}
		return totalEmpHrs * companyEmpWage.wagePerHr;
	}

	public:
	void computeEmpWage() {

		for(CompanyEmpWage *company : companyList ) {

			company -> setEmpWagePerMonth(calculateEmpWage(*company));
			cout << "Monthly Wage Of Employee For Company "
					<< company -> companyName << " Is "
					<< company -> monthlyWage << endl;
		}
	}
};

int main() {

	cout << "Welcome to employee wage problem" << endl;

	EmpWageBuilder emp;

	emp.addCompanyEmpWage("Dmart", 20, 100, 20);
	emp.addCompanyEmpWage("FlipKart", 30, 150, 25);
	emp.addCompanyEmpWage("BigBasket", 50, 200, 30);

	emp.computeEmpWage();
	emp.getTotalWageByCompany("Dmart");

	return 0;
}

