// cpp_learning1_owed.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
	//payments
	float rent = 547.50;
	float adobe = 57.36;
	float youtube = 10.71;
	float linkedin = 34.46;
	float scribd = 8.99;
	float hboprime = 16.23;
	float autoinsurance = 100;
	float tivo = 17.98;
	float water_electric = 55.80;
	float storage = 70;
	float shadow = 37.83;
	float cc_com = 10.58;
	float stakeco = 8.54;
	float netflix = 17.31;
	float total = rent + adobe + youtube + linkedin + scribd + hboprime + autoinsurance + tivo + water_electric + storage + shadow + cc_com + stakeco + netflix;
	std::cout << "Greetings! Monthy Expense total is:";
	std::string pout = "Your total is:          ";
	//std::cout << pout << total;
	const std::string spaces(pout.size(), ' ');
	const std::string second = "* " + spaces + " *";
	const std::string first(second.size(), '*');
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << pout << total << "* " << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;




	std::cout << "Hello World!\n";
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
