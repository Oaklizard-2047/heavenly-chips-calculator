#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	double hcgoal;
	cout << "Heavenly Chips Calculator\n==============================\n";
	while(true){
		cin >> hcgoal;
		cout.setf(ios::fixed);
		cout << setprecision(0) << (pow(10.0,12.0))*(pow(hcgoal,3.0)) << "\n";
	}
}