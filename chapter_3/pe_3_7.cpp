// ---------- Chapter 3.7 ----------
/*
 Write a program that asks you to enter an automobile gasoline consumption figure
in the European style (liters per 100 kilometers) and converts to the U.S. style of
miles per gallon. Note that in addition to using different units of measurement, the
U.S. approach (distance / fuel) is the inverse of the European approach (fuel / distance).
Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters.Thus, 19
mpg is about 12.4 l/100 km, and 27 mpg is about 8.7 l/100 km.
*/
#include <iostream>
int main()
{
	const double Gallon = 3.875;
	const double Miles = 62.14;
	double consum;
	std::cout << "Enter petrol consumption (european style): ";
	std::cin >> consum;
	double consum_us = Miles/(consum/Gallon);
	std::cout << "Your consumption = " << consum_us << " miles per gallon\n";
	std::cin.get();
	std::cin.get();
	return 0;
}
