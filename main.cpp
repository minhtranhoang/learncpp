#include <iostream>
#include "Car.h"
#include "Integer.h"

void Print(int& x) {
	std::cout << "Print(int& x): " << x << std::endl;
}

void Print(const int& x) {
	std::cout << "Print(const int& x): "<< x << std::endl;
}

Integer temp(Integer &a)
{
	Integer temp{ a.GetValue()};
	return temp;
}

int main()
{
	Integer c1{ 5 }, c2{ 10 };
	Integer result = temp(c1);

	result = c1 + 100;

	std::cout << "Address of result is: " << &result << std::endl;

	return 0;
}