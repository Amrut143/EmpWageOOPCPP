#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EmpWageComputation {

	int EMP_WAGE_PER_HOUR = 20;
	int empWorkingHour, dailyWage;

	public:
	void checkAttendance() {

		srand(time(0));
		int empCheck = rand() % 2;

		if(empCheck == 1) {
			cout << "Employee is present" << endl;
			computeEmpDailyWage();
		}
		else {
			cout << "Employee is abscent" << endl;
		}
	}

	void computeEmpDailyWage() {

		empWorkingHour = 8;
		dailyWage = EMP_WAGE_PER_HOUR * empWorkingHour;

		cout << "Employee daily wage is: " << dailyWage << endl;
	}
};

int main() {

	cout << "Welcome to employee wage problem" << endl;

	EmpWageComputation employee;

	employee.checkAttendance();
}



