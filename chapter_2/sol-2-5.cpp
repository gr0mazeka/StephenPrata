//  ---------- S.Prata C++ Primer Plus 6th ed. ----------
//  ------------- Programming Exercises 2.5 -------------
/*
    Write a program that has main() call a user-defined function that takes a
    Celsius temperature value as an argument and then returns the equivalent 
    Fahrenheit value. The program should request the Celsius value as input from
    the user and display the result, as shown in the following code:
    Please enter a Celsius value: 20
    20 degrees Celsius is 68 degrees Fahrenheit.
    For reference, here is the formula for making the conversion:
    Fahrenheit = 1.8 × degrees Celsius + 32.0
*/
#include <iostream>
double converts(int c){ return 1.8*c+32; }
int main()
{
    std::cout << "Please enter a Celsius value: ";
    int cels;
    std::cin >> cels;
    std::cout << cels << " degrers Celsium is " << converts(cels)
              << " degrees Fahrenheit." << std::endl; 
    std::cin.get();
    std::cin.get();
	return 0;
}
