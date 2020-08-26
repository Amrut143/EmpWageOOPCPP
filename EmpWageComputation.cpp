#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EmpWageComputation {

	public:
	void computeEmpWage(string company, int wagePerHr, int maxHrInMonth, int numOfWorkingDays) {

		const int PART_TIME = 1;
		const int FULL_TIME = 2;

		int empHrs;
		int monthlyWage = 0;
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

	EmpWageComputation employee;

	employee.computeEmpWage("Dmart", 20, 100, 20);
	employee.computeEmpWage("FlipKart", 30, 150, 25);
	employee.computeEmpWage("BigBasket", 50, 200, 30);

	return 0;
}

