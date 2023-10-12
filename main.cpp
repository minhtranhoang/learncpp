#include <iostream>
#include "Car.h"
#include "Integer.h"

void Print(Integer& x) {
	std::cout << "Print(int& x): " << x << std::endl;
}

void Print(const Integer& x) {
	std::cout << "Print(const int& x): "<< x.GetValue() << std::endl;
}

Integer temp(Integer &a)
{
	Integer temp{ a.GetValue()};
	return temp;
}

Integer Add(int x, int y)
{
	Integer result{ x + y };
	return result;
}

class Product {
	private :
		Integer m_Id;
		int x;
public:
	Product(const Integer& a) : m_Id(a), x{a.GetValue()} {
		std::cout << "Product()" << std::endl;
	}

	~Product() {
		std::cout << "~Product()" << std::endl;
	}
};

const char *Combine(const char* str1, const char* str2)
{
	char* p = new char[strlen(str1) + strlen(str2) + 1];

	strcpy(p, str1);
	strcat(p, str2);

	return p;
}

int main()
{
	char first_name[10];
	char last_name[10];

	std::cin.getline(first_name, 10);
	std::cin.getline(last_name, 10);

	const char * fullname = Combine(first_name, last_name);
	std::cout << "Full name is: " << fullname;

	delete[] fullname;

	return 0;
}