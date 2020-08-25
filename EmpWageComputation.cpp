#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EmpWageComputation {

	public:
	void checkAttendance() {

		srand(time(0));
		int empCheck = rand() % 2;

		if(empCheck == 1) {
			cout << "Employee is present" << endl;
		}
		else {
			cout << "Employee is abscent" << endl;
		}
	}
};

int main() {

	cout << "Welcome to employee wage problem" << endl;

	EmpWageComputation employee;

	employee.checkAttendance();
}
