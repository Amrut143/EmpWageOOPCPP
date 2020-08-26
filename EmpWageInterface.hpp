#include <iostream>
using namespace std;

class IEmpWageBuilder {

   public:
   virtual void addCompanyEmpWage(string company, int wagePerHr, int numOfWorkingDays, int maxHrsInMonth) = 0;
   virtual void computeEmpWage() = 0;
};

