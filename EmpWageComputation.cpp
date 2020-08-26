#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EmpWageBuilder {

	string company;
	int wagePerHr;
	int numOfWorkingDays;
	int maxHrInMonth;
	int monthlyWage;

	public:
	EmpWageBuilder(string company, int wagePerHr,
						int numOfWorkingDays, int maxHrInMonth) {

		this -> company = company;
		this -> wagePerHr = wagePerHr;
		this -> numOfWorkingDays = numOfWorkingDays;
		this -> maxHrInMonth = maxHrInMonth;
   }

	public:
	void computeEmpWage() {

		const int PART_TIME = 1;
		const int FULL_TIME = 2;

		int empHrs;
		int totalEmpHrs = 0;
		int totalWorkingDays = 0;

		srand(time(0));

		while(totalEmpHrs <= maxHrInMonth && totalWorkingDays < numOfWorkingDays) {
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
			totalEmpHrs += empHrs;
		}
		monthlyWage = totalEmpHrs * wagePerHr;
		cout << "Employee Monthly Wage For Company " << company << " Is: " << monthlyWage << endl;
	}
};

int main() {

	cout << "Welcome to employee wage problem" << endl;

	EmpWageBuilder* dmart = new EmpWageBuilder("Dmart", 20, 100, 20);
	EmpWageBuilder* flipkart = new EmpWageBuilder("FlipKart", 30, 150, 25);
	EmpWageBuilder* bigbasket = new EmpWageBuilder("BigBasket", 50, 200, 30);


	dmart -> computeEmpWage();
	flipkart -> computeEmpWage();
	bigbasket -> computeEmpWage();

	return 0;
}

