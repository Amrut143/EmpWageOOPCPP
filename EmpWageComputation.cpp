#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EmpWageComputation {

	int empHrs;
	int monthlyWage = 0;
	int totalEmpHrs = 0;
	int totalWorkingDays = 0;


	public:
	void computeEmpWage() {

		const int EMP_WAGE_PER_HOUR = 20;
		const int NUM_OF_WORKING_DAYS = 20;
		const int MAX_HOUR_IN_MONTH = 100;
		const int PART_TIME = 1;
		const int FULL_TIME = 2;

		srand(time(0));

		while(totalEmpHrs <= MAX_HOUR_IN_MONTH && totalWorkingDays < NUM_OF_WORKING_DAYS) {
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
		monthlyWage = totalEmpHrs * EMP_WAGE_PER_HOUR;
		cout << "Employee Monthly Wage Is: " << monthlyWage << endl;
	}
};

int main() {

	cout << "Welcome to employee wage problem" << endl;

	EmpWageComputation employee;

	employee.computeEmpWage();

	return 0;
}
