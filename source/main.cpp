#include <iostream>
#include <math.h>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
	double hcgoal;
	cout << "Heavenly Chips Calculator\n==============================\n";
	while(true){
		cin >> hcgoal;
		if(!cin){
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Please enter a number\n";
		}
		else{
			cout.setf(ios::fixed);
			cout << setprecision(0) << (pow(10.0,12.0))*(pow(hcgoal,3.0)) << "\n";
		}
	}
}