#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EmpWageComputation {

	const int EMP_WAGE_PER_HOUR = 20;
	const int PART_TIME = 1;
	const int FULL_TIME = 2;

	int empHrs, empWage = 0;

	public:
	void computeEmpWage() {

		srand(time(0));
		int empCheck = rand() % 3;

		if(empCheck == PART_TIME) {
			empHrs = 4;
		}
		else if(empCheck == FULL_TIME) {
			empHrs = 8;
		}
		else {
			empHrs = 0;
		}
		empWage = empHrs * EMP_WAGE_PER_HOUR;

		cout << "Employee Daily Wage Is: " << empWage << endl;
	}
};

int main() {

	cout << "Welcome to employee wage problem" << endl;

	EmpWageComputation employee;

	employee.computeEmpWage();
}




